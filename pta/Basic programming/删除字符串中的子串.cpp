#include<iostream>

#include<string.h>
using namespace std;
int main()
{
	char a[81];
	cin.getline(a,81);
	char b[81];
	cin.getline(b,81);
	
	char *p;	
	char c[81];
	while((p=strstr(a,b)) != NULL) { //strstr �Ҳ������� NULL 
		*p = '\0'; // ָ��������һ�������Ӻ�����֮ǰ a ����ֹλ�ã� 
		strcpy (c, p+strlen(b)); // strcat �����е���������������ڴ��ַ�����ص������������� c ���� temp 
		strcat (a, c);
	} 
	puts(a);
	return 0;
}