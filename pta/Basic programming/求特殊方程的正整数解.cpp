#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,y;
    cin>>n;
    int tmp=0;
    for (int x = 1; x < sqrt(n); x++)//x��1��ʼѭ��
	{
		for (y = x; y < sqrt(n); y++)//y��1��ʼѭ��
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
