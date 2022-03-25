//访问类的公有成员计算体积
#include <iostream>
using namespace std;

class volume{
    public:
        double width;
        double length;
        double high;
};

int main(){
    volume volume1;
    double VOLUME;
    volume1.width=3;
    volume1.length=4;
    volume1.high=5.1;
    cout<<"VOLUME:"<<volume1.width*volume1.length*volume1.high<<endl;
    return 0;
}