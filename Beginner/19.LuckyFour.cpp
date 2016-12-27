#include <iostream>

void accept();
void findFour(long);

int main(int argc, char *argv[]) {
	accept();
	return 0;
}

void accept() {
	int t;
	long n;
	// printf("Test Cases: ");
	scanf("%d", &t);
	for(int i = 0; i < t; i ++) {
		// printf("\nNumber: ");
		scanf("%ld", &n);
		findFour(n);
	}
}

void findFour(long x) {
	long n = x;
	int count = 0;

	while(n > 0) {
		int d = n % 10;
		if(d == 4){count ++;}
		n /= 10;
	}

	printf("%d\n", count);
}