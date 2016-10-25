#include <stdio.h>

void accept();
void chefEntry(int, int);

int main(void) {
	accept();
	return 0;
}

void accept() {
	int T, A, B;
//	printf("Enter the TestCases: ");
	scanf("%d", &T);
	int i = 0;
	for(i = 0; i < T; i ++) {
//		printf("\nEnter the count of the two guards respectively: ");
		scanf("%d %d", &A, &B);
		chefEntry(A, B);
	}
}

void chefEntry(int a, int b) {
	if(a > b) {
		printf("%d  %d\n", a,  (a + b));
	}
	else {
		printf("%d  %d\n", b,  (a + b));
	}
}
