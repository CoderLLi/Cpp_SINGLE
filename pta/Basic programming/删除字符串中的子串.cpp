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
	while((p=strstr(a,b)) != NULL) { //strstr 找不到返回 NULL 
		*p = '\0'; // 指定连接下一步（连接函数）之前 a 的终止位置； 
		strcpy (c, p+strlen(b)); // strcat 函数中的两个传入参数的内存地址不能重叠，所以这里用 c 当作 temp 
		strcat (a, c);
	} 
	puts(a);
	return 0;
}