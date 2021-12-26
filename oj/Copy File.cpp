#include<iostream>
using namespace std;
int main()
{
    int n,k;
    int z;
    cin>>z;
    for(int i=0;i<z;i++){
        cin>>n>>k;
        if ((n-1)>k && (n)%k!=0){
            cout<<(n-1)/k + 1<<endl;
        }
        else{
            cout<<(n-1)/k <<endl;
        }
    }
    return 0;
}