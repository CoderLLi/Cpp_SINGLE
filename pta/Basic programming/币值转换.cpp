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
			if (num[i] != '0') //��Ϊ0����������
			{
				printf("%c", num[i] + 49);
				if (s[len - i - 1] != '0')
					printf("%c", s[len - i - 1]);

				flag = 0; //��־��0
				i++;
			}
			else//����0�� ����������0�� flag��1����־�� i ++
			{
				flag = 1;
				i++;
			}

			if (num[i] != '0'&& num[i] != '\0' && flag && i != len - 4)//������󣬵�һ����������0�� �Ҳ�Ϊ��λ�����0
			{
				printf("a");
			}
			else if (flag && i == len - 4)//������󣬵�һ����������0�� ��Ϊ��λ�����W
				printf("W");
		}
	}
	

	printf("\n");

	return 0;

}