#include <iostream>
using namespace std;

int main()
{
    int x, y = 7;
    x = (y < 6) ? 1 : 0; //使用条件运算符实现选择结构
    cout << "choose: " << x << endl;
    return 0;
}