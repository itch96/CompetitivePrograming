// Sums in a Triangle
#include <iostream>
#include <cstring>

void findMaximumSum(int x[100][100], int n);

int main(void) {
	int t, n, i = 0;

	//std::cout << "Enter the number of test cases: ";
	std::cin >> t;

	for(i = 0; i < t; i ++) {
	//	std::cout << "\nEnter the number of lines: ";
		std::cin >> n;
		int a[100][100] = {0};

	//	std::cout << "\nEnter the data: \n";
		for(int j = 0; j < n; j ++) {
			for(int k = 0; k <= j; k ++) {
				std::cin >> a[j][k];
			}
		}

		findMaximumSum(a, n);
		std::memset(a, 0, sizeof(a));

	}

	return 0;
}

void findMaximumSum(int x[100][100], int n) {
	for(int i = (n - 2); i >= 0; i --) {
		for(int j = 0; j <= i; j ++) {
			int currentElement = x[i][j];
			int justBelow = x[i + 1][j];
			int belowRight = x[i + 1][j + 1];

			if(currentElement + justBelow > currentElement + belowRight) { x[i][j] = currentElement + justBelow; }
			else {x[i][j] = currentElement + belowRight; }
		}
	}

	std::cout << x[0][0] << std::endl;
}
