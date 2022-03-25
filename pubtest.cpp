#include <iostream>
using namespace std;

class area //定义area类
{
public: //定义公有成员，外部可以访问
    double width;
    double length;
};

int main()
{
    area area1;                        //定义对象area1
    double AREA;                       //定义双精度型变量AREA
    area1.width = 3;                   //外部访问公有成员，设置宽为3
    area1.length = 3.1;                //外部访问公有成员，设置长为3.1
    AREA = area1.width * area1.length; //计算面积
    cout << AREA << endl;              //输出面积
    return 0;
}