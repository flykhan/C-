#include <iostream>
using namespace std;

class area
{
protected: //定义受保护的成员
    double width;
};

class squarearea : area //定义squarearea子类
{
public:                              //定义公有成员
    void setsquarewidth(double wid); //定义成员函数
    double getsquarewidth(void);
};

//定义子类的成员函数
void squarearea::setsquarewidth(double wid)
{
    width = wid; //通过squarearea子类访问area类中受保护的成员width
}

double squarearea::getsquarewidth(void)
{
    return width;
}

//程序的主函数
int main()
{
    squarearea square; //定义对象
    square.setsquarewidth(3.1);//设置宽度为3.1
    cout<<"width:"<<square.getsquarewidth()<<endl;//输出设置的宽度
    return 0;
}

此程序可以分为相对独立的三个部分，一是对 area 类的定义，二是对 squarearea 子类及子类函数的定义，三是主函数 main()。对于 area 类中受保护的成员 width 可以通过子类进行访问。