// ATM
#include "stdio.h"

void accept(void);
void compute(int, float);

void accept(void){
	int withdraw = 0;
	float balance = 0;
//	printf("\nEnter the amount that you would like to withdraw: ");
//	scanf("%d", &x);
//	printf("\nEnter your Account Balance.");
	scanf("%d%f", &withdraw, &balance);

	compute(withdraw, balance);
}

void compute(int w, float b){
	if(w % 5 == 0){
		if(b - w - 0.5 >= 0) printf("%0.2f\n", b - w - 0.5);
		else printf("%.2f\n", b);
	}
	else printf("%.2f\n", b);
}
int main(void){
	accept();
	return 0;
}
