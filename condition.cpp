#include <iostream>
using namespace std;

int main(){
    int a = 5;
    int b = 3;
    int c;
    c = (a>b) ? a : b; //如果a大于b则返回a，否则返回b
    cout << c;
}