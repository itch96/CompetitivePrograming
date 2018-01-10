// Factorial and trailing zeros
#include "stdio.h"

void accept(void);
void Z(unsigned long int);

void accept(void){
	unsigned long int T = 0, N = 0, i = 0;
	scanf("%lu", &T);
	for(i = 0; i < T; i ++){
		scanf("%lu", &N);
		Z(N);
	}
}

void Z(unsigned long int n){
	unsigned long int i = n;
	int count = 0;
	while(i > 4){
		if(i % 5 == 0){
			count += (i / 5);
			i /= 5;
		}
		else i --;
	}

	printf("%d\n", count);
}

int main(){
	accept();
	return 0;
}
