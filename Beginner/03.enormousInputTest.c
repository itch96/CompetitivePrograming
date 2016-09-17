#include "stdio.h"

void accept(void);
int check(unsigned int, unsigned int);

void accept(void){
	unsigned int n = 0, k = 0, t = 0, i = 0, count = 0;
	scanf("%u%u", &n, &k);
	for(i = 0; i < n; i ++){
		scanf("%u", &t);
		if(check(t, k)) count ++;
//		printf("%u\n", count);
	}
	printf("%u\n", count);
}

int check(unsigned int x, unsigned int y){
	if((x % y) == 0) return 1;
	else return 0;
}

int main(void){
	accept();
	return 0;
}