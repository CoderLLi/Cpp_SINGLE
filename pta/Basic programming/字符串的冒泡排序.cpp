#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[110][20];
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++)
        scanf("%s",s[i]);
        
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(strcmp(s[j],s[j+1]) > 0)
            {
                char t[20];
                strcpy(t, s[j]);
                strcpy(s[j], s[j+1]);
                strcpy(s[j+1], t);
 
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("%s\n",s[i]);
}