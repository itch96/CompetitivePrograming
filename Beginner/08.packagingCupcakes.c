// Packaging Cupcakes
#include "stdio.h"

void accept(void);
void leftover(int);

int main(int argc, char* argv[]) {
	int T = 0, N = 0;
	int i = 0;

//	printf("Enter the number of Test Cases: ");
	scanf("%d", &T);

	for(i = 0; i < T; i ++) {
//		printf("\nEnter the number of cupcakes: ");
		scanf("%d", &N);
		leftover(N);
	}
}

void leftover(int n) {
	printf("%d\n", (n / 2) + 1);
}
