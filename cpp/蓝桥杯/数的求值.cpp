#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, c = 1, d;
    for(int i = 4; i <= 20190324; ++i)
    {
        d = (a + b + c) % 10000;
        a = b % 10000;
        b = c % 10000;
        c = d % 10000;
    }

    printf("%d", d);  //4659 
    return 0;
}