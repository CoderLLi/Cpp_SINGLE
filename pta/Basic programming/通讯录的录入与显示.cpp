#include<iostream>
using namespace std;
struct address_list
{
    
    char name[11];
    char dates[20];
    char sex[2];
    char sta_num[17];
    char mob_num[17];
};

int main()
{
    
    int n,k;
    int num;
    address_list person[10];
    scanf("%d\n", &n);
 
    for(int i = 0; i < n; i++)
    {
        scanf("%s %s %c %s %s",person[i].name, person[i].dates, &person[i].sex[0], person[i].sta_num, person[i].mob_num );
    }
    scanf("\n%d", &k);
    for(int j = 0; j < k; j++)
    {
        scanf(" %d", &num);
        
        if(num >= 0 && num < n)
        {
            printf("%s %s %s %c %s\n", person[num].name, person[num].sta_num, person[num].mob_num, person[num].sex[0], person[num].dates);
        }
        else
        {
            printf("Not Found\n");
        }
    }
    return 0;
}