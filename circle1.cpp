#include <iostream>
using namespace std;

int main()
{
    int sub = 0; //定义变量sub并赋值为0
    int i = 1;   //定义变量i并赋值为1
    while (i < 5)
    {             //判断i<5是否成立，若成立则执行循环体内的语句，若不成立则执行while语句后的其他语句
        sub += i; //执行sub = sub + i
        i++;      // i累加1
    }
    cout << sub << endl; //输出sub的值
    return 0;
}