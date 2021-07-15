#include<iostream>
#include <string.h>
using namespace std;
int main(){
    string s="0SBQWSBQY";
    char num[10];

	scanf("%s", num);

	int len = strlen(num);
	int i = 0, flag = 0;

	if (strcmp(num, "0") == 0 )
	{
		printf("a");
	}
	else
	{
		while (i < len)
		{
			if (num[i] != '0') //不为0，正常操作
			{
				printf("%c", num[i] + 49);
				if (s[len - i - 1] != '0')
					printf("%c", s[len - i - 1]);

				flag = 0; //标志置0
				i++;
			}
			else//遇到0， 或者连续的0， flag置1，标志， i ++
			{
				flag = 1;
				i++;
			}

			if (num[i] != '0'&& num[i] != '\0' && flag && i != len - 4)//遇到零后，第一次遇到非零0， 且不为万位，输出0
			{
				printf("a");
			}
			else if (flag && i == len - 4)//遇到零后，第一次遇到非零0， 且为万位，输出W
				printf("W");
		}
	}
	

	printf("\n");

	return 0;

}