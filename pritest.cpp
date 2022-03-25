#include <iostream>
using namespace std;

class area
{
public: //定义公有成员
    double length;
    void setwidth(double wid);
    double getwidth(void);

private: //定义私有成员
    double width;
};

//定义公有成员函数
void area::setwidth(double wid)
{
    width = wid;
}
double area::getwidth(void)
{
    return width;
}

//主函数
int main()
{
    area len1;//定义对象
    area wid1;
    len1.length=3.1;//访问area类公有成员
    cout<<"length:"<<len1.length<<endl;
    wid1.setwidth(3.2);//使用公有成员函数设置宽度
    cout<<"width:"<<wid1.getwidth()<<endl;
    return 0;
}