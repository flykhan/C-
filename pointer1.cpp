#include<iostream>
using namespace std;

int main(){
    int po1=6;//定义int型变量po1,赋值为6
    int *p=&po1;//指针变量p指向变量po1的地址

    cout<<"获取指针所指变量的值: "<<*p<<endl;
    cout<<"获取指针的内存地址: "<<&p<<endl;
    return 0;
}