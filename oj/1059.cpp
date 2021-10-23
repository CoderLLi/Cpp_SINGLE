#include<iostream>
using namespace std;
int main(){
    int n, t;
    cin >>n;
    int m[n];
    for(int i=0;i<n;i++)
        cin >>m[i];
    for (int j=0;j<n;j++)
        for(int k=0;k<n-j-1;k++)
            if (m[k]<m[k+1])
                t=m[k+1],m[k+1]=m[k],m[k]=t;
    for(int i=0;i<n;i++)
        printf("%d ",m[i]);
    return 0;
}