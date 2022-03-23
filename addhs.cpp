#include <iostream>
using namespace std;

int add(int a, int b); //函数声明

int main()
{
    int x, y;
    cout << "input x y :"; //输出提示信息
    cin >> x >> y;         //通过输入的方式给x y赋值
    int c = add(x, y);     //在未定义函数前调用函数。将函数的返回结果赋给变量c
    cout << c << endl;     //输出c值
    return 0;
}

int add(int a, int b)
{
    return a + b;
} //定义函数