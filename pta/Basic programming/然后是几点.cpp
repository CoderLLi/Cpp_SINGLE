#include<stdio.h>
int main(){
    int t1,t2,h1,h2,m1,m2;
    scanf("%d %d",&t1,&t2);
    h1=t1/100;
    m1=t1%100;
    
    if(t2>=0){
        h1=h1+(m1+t2)/60;
        m1=(m1+t2)%60; 
    }
    else{ 
        int con=h1*60+m1+t2;
        h1=con/60;
        m1=con%60;
    }
    printf("%d%02d",h1,m1);//重要的部分 %02d……
    return 0;
}



