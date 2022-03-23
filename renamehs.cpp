#include <iostream>
using namespace std;

int add(int a, int b) //定义整形函数add
{
    int c;
    c = a - b;
    return c;
}

double add(double a, double b) //定义双精度型函数add
{
    double c;
    c = a + b;
    return c;
}

int main()//函数重载
{
    cout << "a + b = " << add(3, 4) << endl;         //调用整形函数add
    cout << "a + b = " << add(3.111, 4.222) << endl; //调用双精度型函数add
}