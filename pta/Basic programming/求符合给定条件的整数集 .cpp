#include <iostream>
using namespace std;
 
int main (void){
	int a, count = 0;
	
	scanf("%d", &a);
	for(int i = a; i < a+4; i++){
		for(int j = a; j < a+4; j++){
			for(int k = a; k < a+4; k++){
				if(i == j || j == k || k == i){
					continue;
				}else{
					printf("%d", i*100 + j*10 + k);
					count++;
					if(count%6 == 0){
						printf("\n");
					}else{
						printf(" ");
					}
				}
			}
		}
	}
	
	return 0;
}