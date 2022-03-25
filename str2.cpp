#include <iostream>
using namespace std;

int main()
{
    string str1 = "Hello ";
    string str2 = "Shiyanlou!";

    str1.append(str2); //连接字符串
    cout << "连接s1和s2: " << str1 << endl;
    cout << "连接s1和s2后str1的长度: " << str1.length() << endl; //计算字符串str1的长度
    return 0;
}