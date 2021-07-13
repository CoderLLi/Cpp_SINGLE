#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int m;
    string a;
    cin>>a;
    for(int i=a.length()/2;i<a.length();i++)
    {
        if(a[i]!=a[a.length()-i])
        m=i+1;
        break;
    }
    cout<<a.length()-m<<endl;
    return 0;
}