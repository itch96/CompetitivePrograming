#include <iostream>

int checkAmbiguousPermutation(int [], int);

int main(void) {
	int n, i;
	int a[100000];

	while (true) {
//		std::cout << "\nEnter the value of n: ";
		std::cin >> n;

		if(n == 0) { return 0; }

//		std::cout << "\nEnter the Permutation: \n";
		for(i = 0; i < n; i ++) { std::cin >> a[i]; }

		if(checkAmbiguousPermutation(a, n)) { std::cout << "ambiguous\n"; }
		else { std::cout << "not ambiguous\n"; }
	}

	return 0;
}

int checkAmbiguousPermutation(int x[100000], int n) {
	int i = 0, a[100000], currentSearch = 1;
	for(i = 0; i < n; i ++) {
		if(x[i] == currentSearch) { a[currentSearch - 1] = (i + 1); currentSearch ++; i = -1; }
	}
	for(i = 0; i < n; i ++) {
		if(a[i] != x[i]) {
			return 0;
		}
	}
	return 1;
}