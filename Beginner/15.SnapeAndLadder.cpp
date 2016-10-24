#include <iostream>
#include <math.h>

void maxMinRS(int, int);

int main(void) {
	int T;
//	std::cout << "\nEnter the number of TestCases: ";
	std::cin >> T;
	int i;
	for(i = 0; i < T; i ++) {
		int B, LS;
//		std::cout << "\nEnter the Breadth B: ";
		std::cin >> B;
//		std::cout << "\nEnter the length of LeftSide LS: " ;
		std::cin >> LS;

		maxMinRS(B, LS);
	}

	return 0;
}
void maxMinRS(int b, int ls) {
	double minRS, maxRS;

	// if ls is vertical
	maxRS = sqrt((b * b) + (ls * ls));

	// if rs if  vertical
	minRS = sqrt((ls * ls) - (b * b));

//	std::cout << "\nMinimum RS : " << minRS;
//	std::cout << "\nMaximum RS: " << maxRS;
	std::cout << minRS << " ";
	std::cout << maxRS << std::endl;

}