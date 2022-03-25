#include <iostream>
using namespace std;

int main()
{
    int i = 3;
    int j = 4;

    int &x = i; //定义引用x，它是整型变量i的引用

    int *s; //定义指针s
    s = &j; //指针s指向整型变量j的地址

    cout << "初始化引用 x: " << x << endl;
    cout << "初始化指针 s: " << *s << endl;

    return 0;
}