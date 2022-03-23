#include <iostream>
using namespace std;

int main(){
    int i = 3;
    if (i == 3){
        goto acc;
    }else{
        cout<<i<<endl;
    }
    acc:cout<<"acc"<<endl; //执行goto acc时跳转至本条语句。
    return 0;
}