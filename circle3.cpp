#include <iostream>
using namespace std;

int main()
{
    int sub = 0; //定义变量sub并赋值为0
    int i;       //定义变量i
    for (i = 1; i < 5; i++)
    {
        sub += i;
    }
    cout << sub << endl;
    return 0;
}