//使用for语句计算4的阶乘
#include <iostream>
using namespace std;

int main()
{
    int sub = 1;
    for (int i = 1; i <= 4; i++)
    {
        sub *= i;
    }
    cout << "4的阶乘是：" << sub << endl;
    return 0;
}