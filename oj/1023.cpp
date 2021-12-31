#include<iostream>
using namespace std;
int main()
{
    int n,q=1,temp;
    double p=1;
    double sum = 0;
    cin >> n;
    for(int i =0;i<n;i++){
        temp=q;
        q=p+q;
        p=temp;
        sum+=q/p;
    }
    printf("%.2f",sum);
}