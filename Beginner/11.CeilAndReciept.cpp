#include <iostream>

void findDishes(int);

int main(void) {
	int t, p;

//	std::cout << "\nTest Cases: ";
	std::cin >> t;

	while(t > 0) {
//		std::cout << "\nPrice: ";
		std::cin >> p;

		findDishes(p);
		t --;
	}

	return 0;
}

void findDishes(int money) {
	int menuPrice[12] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048};
	int bill = 0, count = 0;

	for(int i = 11; i >= 0; i --) {
		while(money >= 0 && money >= menuPrice[i]) {
			bill += menuPrice[i];
			money -= menuPrice[i];
			count ++;
		}
	}

//	std::cout << "\nDishes Ordered: " << count;
	std::cout << count;
}