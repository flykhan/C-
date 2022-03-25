#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str1[18] = "Hello ";
    char str2[11] = "Shiyanlou!";

    strcat(str1, str2); //连接字符串
    cout << "连接str1和str2: " << str1 << endl;

    cout << "连接str1和str2后str1的长度: " << strlen(str1) << endl; //计算字符串str1的长度
    return 0;
}