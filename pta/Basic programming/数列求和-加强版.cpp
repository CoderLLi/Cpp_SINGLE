#include<stdio.h>
#include<math.h>

int main()
{
	int num,n,i,j,flag=0;
	scanf("%d %d",&num,&n);
	if(n==0)
	{
		printf("0");
		return 0;
	}
	int a[n+1];
	for(i=1;i<=n;i++)
	{
		a[i]=(int)(num*(n-i+1)+flag)%10;
		flag=(int)(num*(n-i+1)+flag)/10;
	}
	if(flag)
	printf("%d",flag);
	for(i=n;i>=1;i--)
	printf("%d",a[i]);
}
