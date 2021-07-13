#include<stdio.h>
int main() 
{ 
	int i,j,n;
	int a[35][35];
	//scanf("%d",&n);
	n=12;
	for(i=0;i<n;i++) 
	{ 
		for(j=0;j<=i;j++) 
		{ 
			a[i][j]=1; //先把所有数字赋 1
		} 
	} 
	for(i=2;i<n;i++) //从第三行开始加 
	{ 
		for(j=1;j<i;j++) 
		{ 
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		} 
	} 
	for(i=0;i<n;i++) //打印
	{ 
		for(j=0;j<=i;j++)
		{ 
			printf("%d ",a[i][j]);
		} 
		printf("\n");
	} 
	return 0;
} 