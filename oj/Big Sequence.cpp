#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> z;
    int m, n,p;
    long long max = 0,count;
    cin>> m>> n;
    for(int i=0;i<m;i++){
        cin>>p;
        z.push_back(p);
    }
    for(int i=0;i<m;i++){
        count=0;
        for(int j=0;j<n;j++){
            count=count+z[i+j];
            if(count>max)max=count;
        }
    }
    cout<<max;
    return 0;
}