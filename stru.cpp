#include <iostream>
using namespace std;

struct shiyanlou //定义shiyanlou结构体
{
    int a; 
    int pri(){
        return a;
    }
} s1;
int main(){
    cout << "sbefore: " <<s1.pri() << endl;
    s1.a = 6;
    cout << "safter: " << s1.pri() << endl;
    return 0;
}