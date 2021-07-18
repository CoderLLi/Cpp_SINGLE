#include <stdio.h>

int main()
{
	int N,K;
	scanf("%d %d",&N,&K);
	int a[N];
	int i;
	for(i=0;i<N;i++)
	{
	scanf("%d",&a[i]);
    }//输入内容 
	
	int t;//用来交换两个数字 
	int b,c,d;//定义三个数后面循环用 
	for(b=0;b<K;b++)
	{
		for(c=0;c<N-1;c++)
		{
			if(a[c]>a[c+1])
				{
					t=a[c];
					a[c]=a[c+1];
					a[c+1]=t;
				}
		}
	}
	
	for(d=0;d<N;d++)
	{
	if(d!=N-1)
	printf("%d ",a[d]);//输出数字 
	else
	printf("%d",a[d]);//最后一位不加空格 
    }
	return 0;
}
