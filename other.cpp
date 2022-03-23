#include <iostream>
using namespace std;

int main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        // //循环至i=3时，满足条件i==3执行continue语句：直接跳出本次循环且不执行循环体内continue后的其他语句。随后再次执行循环增量i++语句，判定循环条件，执行循环体。
        // if (i == 3)
        //     continue;

        //循环至i=3时，满足条件i==3执行break语句，直接退出for循环，结果只输出数字3前面的数字0 1 2.
        if (i == 3)
            break;
        cout << i << endl;
    }
    return 0;
}