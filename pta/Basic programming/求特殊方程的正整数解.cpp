#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,y;
    cin>>n;
    int tmp=0;
    for (int x = 1; x < sqrt(n); x++)//x从1开始循环
	{
		for (y = x; y < sqrt(n); y++)//y从1开始循环
		{
			if (n == x * x + y * y)
			{
				printf("%d %d\n", x, y);
                tmp=1;
			}
		}
	}
    if (!tmp)
    printf("No Solution");

}
