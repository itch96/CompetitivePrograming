#include <iostream>

void accept();
void firstLast(long);

int main(int argc, char *argv[]) {
	accept();
	return 0;
}

void accept() {
	int t;
	long n;

	std::cin >> t;
	for(int i = 0; i < t; i ++) {
		std::cin >> n;
		firstLast(n);
	}
}

void firstLast(long x) {
	int last = x % 10;
	long n = x;
	long first;

	while(n > 0) {
		int d = n % 10;
		first = n;
		n /= 10;
	}
	int sum = first + last;
	std::cout << sum << std::endl;
}