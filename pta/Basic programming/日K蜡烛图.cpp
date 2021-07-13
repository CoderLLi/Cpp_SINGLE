#include<stdio.h>
int main (void)
{
	int flag=0;
    double Open,High,Low,Close;
    Open=High=Low=Close=0;
    scanf("%lf %lf %lf %lf",&Open,&High,&Low,&Close);
    
    
//    判断日K蜡烛的类型
    if(Close<Open)	//表示为 “BW-Solid”（即“实心蓝白蜡烛”）
    {
    	printf("BW-Solid");
	}
	else if(Close>Open)	//表示为 “R-Hollow”（即“空心红蜡烛”）
	{
		printf("R-Hollow");
	}
		else  printf("R-Cross");	// “R-Cross”（即“十字红蜡烛”）


//判断上下影线	
	 if(Low<Open&&Low<Close)	
    {
    	flag++;
	//	printf("Lower Shadow");	//称为“Lower Shadow”（即“有下影线”）	
	}
	if(High>Open&&High>Close)	
    {
    	flag=flag+2;
    //	printf("Upper Shadow");	//称为“Upper Shadow”（即“有上影线”）	
	}
	switch (flag)
	{
		case 1:printf(" with Lower Shadow");break;
		case 2:printf(" with Upper Shadow");break;
		case 3:printf(" with Lower Shadow and Upper Shadow");break;
	}
	
    return 0;
}
