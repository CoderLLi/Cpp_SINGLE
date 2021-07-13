#include<iostream>
using namespace std;
int sum=0;
void count(int n)
{
    
    while(n>0)
    {
        if(n%10==1)
        sum++;
        n=n/10;
    }
}
int main()
{
    int n;
    cin>>n;
    for(int m=1;m<=n;m++)
        count(m);
    cout<<sum;
    return 0;

}