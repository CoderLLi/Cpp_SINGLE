#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int j=1;
    int sum=0;
    cin>>a;
    cin>>b;
    for (int i=a;i<=b;i++){
        sum+=i;
        printf("%5d",i);
        if( j % 5 == 0 && b - a != 4)	printf("\n");	//如果只输出五个数就不需要换行 
		j++;
    }
    printf("\n");
    printf("Sum = %d",sum);
}