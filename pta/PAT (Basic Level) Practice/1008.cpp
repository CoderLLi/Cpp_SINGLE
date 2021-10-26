#include<iostream>
using namespace std;
int main()
{
    string a[100];
    int n,t,f;
    cin>>n;
    cin>>t;
    string m;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    f=t%n;

    for (int i=n-f;i<n;i++){
        cout<<a[i]<<" ";
    }
    for (int i=0;i<n-f-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-f-1];
}