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
    }//�������� 
	
	int t;//���������������� 
	int b,c,d;//��������������ѭ���� 
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
	printf("%d ",a[d]);//������� 
	else
	printf("%d",a[d]);//���һλ���ӿո� 
    }
	return 0;
}
