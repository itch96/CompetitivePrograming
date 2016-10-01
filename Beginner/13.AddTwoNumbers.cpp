#include <iostream>

void add(int, int);

int main(void) {
	int t, a, b;

	std::cin >> t;
	for(int i = 0; i < t; i ++) {
		std::cin >> a;
		std::cin >> b;

		add(a, b);
	}
}

void add(int x, int y) {
	std::cout << (x + y) << std::endl;
}