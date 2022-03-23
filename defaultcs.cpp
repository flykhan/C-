#include <iostream>
using namespace std;

int add(int a, int b = 5)
{ //变量b的默认值为5
    return a + b;
}

int main()
{
    int a, b;
    cout << "input a b: " << endl;
    cin >> a >> b;
    cout << "a + b (default) = " << add(a) << endl; //此时调用的add函数将b的值缺省，使之为默认参数
    cout << "a + b = " << add(a, b) << endl;
    return 0;
}