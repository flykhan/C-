#include <iostream>
using namespace std;

int global1 = 1; //定义全局变量 global1

void func(){
    cout << global1 << endl; //输出全局变量 global1 的值
}

int main(){
    cout << global1 <<endl; //输出全局变量 global1 的值
    func(); //调用函数 func()
    return 0;
}