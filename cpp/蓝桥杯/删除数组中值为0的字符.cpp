
#include <stdio.h>
#include<iostream>
using namespace std;
int  CompactIntegers(int *a,int n)
{
	int i,j=0;
	for (i=0;i<n;i++)
	{
		if (a[i]!=0)
		{
			a[j++]=a[i];
		}
	}
	return j;
}
 
main(void)
{
	int s,i,a[100],n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	scanf("%d",&a[i]);
	s=CompactIntegers(a,n);
	
	for (i=0;i<s;i++)
		cout<<a[i]<<' ';
    cout<<endl;
    printf("%d\n",s);
	return 0;
}