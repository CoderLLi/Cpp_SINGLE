#include<iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int m[n];
    for(int i=0;i<n;i++){
        cin >>m[i];
    }
    int min;
    for (int j=0;j<n;j++){
        min=m[0];
        for(int k=0;k<n-j;k++){
            if (min<m[k]){
                m[k-1]=m[k];
                m[k]=min;
            }
            min=m[k];
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",m[i]);
    }
    return 0;
}