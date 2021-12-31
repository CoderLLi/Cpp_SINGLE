#include<iostream>
using namespace std;
void wan_shu(int i){
    int sum = 0;
    for(int j=1;j<i;j++){
        if(i%j==0)sum+=j;
    }
    if(sum==i){
        printf("%d its factors are",i);
        for(int j = 1;j<i;j++){
            if(i%j==0)printf(" %d",j);
        }
        printf("\n");
    }

}
int main()
{
    int n ;
    cin >>n;
    for(int i=2;i<=n;i++){
        wan_shu(i);
    }
}