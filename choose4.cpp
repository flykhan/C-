#include <iostream>
using namespace std;

int main()
{
    int x, y = 7;
    if (y > 8)
    {
        x = 1;
    }
    else if (y > 5)
    {
        x = 2;
    }
    else
    {
        x = 3;
    }
    cout << "choose: " << x << endl;
    return 0;
}