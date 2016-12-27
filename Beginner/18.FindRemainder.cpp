#include <iostream>

void accept();
void rem(int, int);

int main(int argc, char *argv[]) {
	accept();
	return 0;
}

void accept() {
	int t, a, b;

	// printf("Test Cases: ");
	scanf("%d", &t);
	for(int i = 0; i < t; i ++) {
		// printf("\nNumbers: ");
		scanf("%d%d", &a, &b);
		rem(a, b);
	}
}

void rem(int x, int y) {
	printf("%d\n", (x % y));
}