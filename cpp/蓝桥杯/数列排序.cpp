#include<iostream>
using namespace std;
int main(){
    int a[200];
    int n,temp;
    cin>>n;
    for(int z=1;z<=n;z++)
        cin>>a[z];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
           if(a[i]>a[j])
           {
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;
           } 
        }
    }
    for(int i=1;i<=n;i++)
    cout<<a[i]<<' ';
}