#include<stdio.h>
int main (void)
{
	int flag=0;
    double Open,High,Low,Close;
    Open=High=Low=Close=0;
    scanf("%lf %lf %lf %lf",&Open,&High,&Low,&Close);
    
    
//    �ж���K���������
    if(Close<Open)	//��ʾΪ ��BW-Solid��������ʵ���������򡱣�
    {
    	printf("BW-Solid");
	}
	else if(Close>Open)	//��ʾΪ ��R-Hollow�����������ĺ����򡱣�
	{
		printf("R-Hollow");
	}
		else  printf("R-Cross");	// ��R-Cross��������ʮ�ֺ����򡱣�


//�ж�����Ӱ��	
	 if(Low<Open&&Low<Close)	
    {
    	flag++;
	//	printf("Lower Shadow");	//��Ϊ��Lower Shadow������������Ӱ�ߡ���	
	}
	if(High>Open&&High>Close)	
    {
    	flag=flag+2;
    //	printf("Upper Shadow");	//��Ϊ��Upper Shadow������������Ӱ�ߡ���	
	}
	switch (flag)
	{
		case 1:printf(" with Lower Shadow");break;
		case 2:printf(" with Upper Shadow");break;
		case 3:printf(" with Lower Shadow and Upper Shadow");break;
	}
	
    return 0;
}
