#include<iostream>
using namespace std;
int main()
{
	int a[3][3],sum=0;
	cout<<"请输入一个3*3的矩阵，从上到下从左往右依次输入："<<endl;
	for(int i=0;i<=2;i++)
	{
		for(int m=0;m<=2;m++)
		{
			cin>>a[i][m];

		}
	}
	for(int m=0;m<3;m++)
		sum+=a[m][m];
	cout<<sum<<endl;
    return 0;
}