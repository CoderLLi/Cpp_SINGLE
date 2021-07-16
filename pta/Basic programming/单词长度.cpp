#include <iostream>
using namespace std;
int main (void)
{ 
	char c;
	int count=0;
	int flag=0;  //前面是否有单词标志
	scanf("%c",&c);
	while(c != '.'){
		if(c==' '){
			if(count !=0){
				if(flag==1)
					printf(" %d",count);    //前面有单词，且行尾有空格的输出格式。
				else{
					printf("%d",count);  //第一个单词，且不是只有一个单词时的输出格式
					flag=1;
				}
				
			}
			count=0;
			}
		else{
			count++;
		}	
		scanf("%c",&c);
	}
	if(count!=0 && c=='.')    //行尾没有空格
		if(flag==0)
			printf("%d",count);  //只有一个单词时的输出格式，且行尾没有空格的输出格式
		else{
			printf(" %d",count);  //有多个单词，且行尾没有空格的输出格式
			flag=1;
		}
    else{
        return 0;
    }
			
	return 0; 
}