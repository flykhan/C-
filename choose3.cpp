#include <iostream>
using namespace std;

int main()
{
    int x;
    int y = 7;
    int z = 3;
    if (y < 6)
    {
        x = 1;
    }
    else
    {
        if (z > 2)
        {
            x = 2;
        }
        else
        {
            x = 3;
        }
    }
    cout << "choose: " << x << endl;
    return 0;
}