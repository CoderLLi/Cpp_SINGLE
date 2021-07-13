#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[100][100];
	int n,m,b,c,d;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
			if(i==j)	
				a[i][j]=0;
			else
				a[i][j]=999999;
	for(int i=1;i<=m;i++)
	{
		cin>>b>>c>>d;
		a[b][c]=d;
	}
	//Floyd-WarshallºËÐÄÓï¾ä
	for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
				for(int k=1;k<=n;k++)
					if(a[j][k]>a[j][i]+a[i][k]) 
						a[j][k]=a[j][i]+a[i][k];
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;			
	}
}
