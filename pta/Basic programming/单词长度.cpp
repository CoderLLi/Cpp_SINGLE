#include <iostream>
using namespace std;
int main (void)
{ 
	char c;
	int count=0;
	int flag=0;  //ǰ���Ƿ��е��ʱ�־
	scanf("%c",&c);
	while(c != '.'){
		if(c==' '){
			if(count !=0){
				if(flag==1)
					printf(" %d",count);    //ǰ���е��ʣ�����β�пո�������ʽ��
				else{
					printf("%d",count);  //��һ�����ʣ��Ҳ���ֻ��һ������ʱ�������ʽ
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
	if(count!=0 && c=='.')    //��βû�пո�
		if(flag==0)
			printf("%d",count);  //ֻ��һ������ʱ�������ʽ������βû�пո�������ʽ
		else{
			printf(" %d",count);  //�ж�����ʣ�����βû�пո�������ʽ
			flag=1;
		}
    else{
        return 0;
    }
			
	return 0; 
}