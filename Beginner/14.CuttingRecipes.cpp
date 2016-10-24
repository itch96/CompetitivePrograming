#include <iostream>

void leastQuantity(int [], int, int);
int gcd(int, int);
int gcd_a(int, int []);

int main(void) {
	int t, n, quantity[50];

//	std::cout << "\nTest Cases: ";
	std::cin >> t;

	for(int j = 0; j < t; j ++) {
//		std::cout << "\n\tTest Case " << j << " :";
//		std::cout << "\nIngredients: ";
		std::cin >> n;

//		std::cout << "\nQuantities: ";
		for(int i = 0; i < n; i ++) {
			std:: cin >> quantity[i];
		}
		int gcd = gcd_a(n, quantity);
		leastQuantity(quantity, n, gcd);
	}
}
void leastQuantity(int quantities[50], int n, int gcd) {
	int newQuantities[50], flag = 0;

	for(int i = 0; i < n; i ++) {
		if(quantities[i] % gcd == 0) {
			newQuantities[i] = quantities[i] / gcd;
		}
		else {
			flag = 1;
			break;
		}
	}

//	std::cout << "\nNew Quantities: ";
	if(flag == 1) {
		for(int i = 0; i < n; i ++) {
			std::cout << quantities[i] << " ";
		}
	}
	else {
		for(int i = 0; i < n; i ++) {
			std::cout << newQuantities[i] << " ";
		}
	}

	std::cout << std::endl;
}
int gcd(int x, int y) {
	int wk;
    	if(x<y) {
    		wk=x;
    		x=y;
    		y=wk;
    	}
    	while(y){
        		wk = x%y;
        		x=y;
        		y=wk;
    	}
    return x;
}

int gcd_a(int n, int a[50]) {
    	if(n==1) return a[0];
    	if(n==2) return gcd(a[0], a[1]);
    	int h = n / 2;
    	return gcd(gcd_a(h, &a[h-1]), gcd_a(n - h, &a[h]));
}
