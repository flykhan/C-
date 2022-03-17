//管理堆内存 new delete关键字的使用
#include <iostream>
using namespace std;

int main(){
    int *p; //定义一个整形指针变量p
    p = new int; //动态分配一个存放整形数据的内存空间，并将其首地址赋给整形指针变量p
    *p = 6; //为指针指向的内存块赋值为6
    cout << *p << endl; //输出内存块的赋值
    delete p; //释放指针变量p指向的内存空间
    return 0;
}