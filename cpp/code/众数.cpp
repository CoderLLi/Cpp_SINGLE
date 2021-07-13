#include <iostream>
using namespace std;
int Search(int a[])
{
	int b[100]={1},max=0,wmax=0;
	for(int i=0;i<9;i++)
	{
		for(int j=i+1;j<9;j++)
		{
			if(a[i]==a[j])
			b[i]++;
		}
	}
	max=b[0];
	wmax=0;
	for(int i=1;i<9;i++)
	{
		if(b[i]>max)
		{
			wmax=i;
			max=b[i];
		}
	}
	return a[wmax];
}
int main()
{
	int a[]={2,2,5,1,5,1,5,5,5};
	cout<<"该组数字中的众数是"<<Search(a)<<endl;
    return 0;
}