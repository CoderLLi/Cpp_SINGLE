#include<iostream>
using namespace std;
bool check(int n)
{
    while(n)
    {
        int tmp = n % 10;
        if(tmp == 2 || tmp == 4) return false;
        n /= 10;
    }
    return true;
}

int main()
{
    int ans = 0;
    for(int i = 1; i < 2019; ++i)
    {
        if(check(i))
        {
            for(int j = i + 1; j < 2019; ++j)
            {
                if(check(j))
                {
                    int k = 2019 - i - j;  
                    if(check(k) && k > j) ans++;
                }
            }
        }
    }

    printf("%d", ans);  //40785

    return 0;
}