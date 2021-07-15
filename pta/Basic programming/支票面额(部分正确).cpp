#include<iostream>
using namespace std;
int main()
{
    int y;
    int n;
    cin>>n;
    for (y=1;y<100;y++)
    {
        if ((y*199+n)%98==0){
            printf("%d.%d",y,int((y*199+n)/98));
            return 0;
        }
    }
    printf("No Solution");
}