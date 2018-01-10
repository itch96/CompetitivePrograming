#include <iostream>

void accept();
int isPallin(int);
int main(void) {
    int t, n;
    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        std::cin >> n;
        if(isPallin(n)) {std::cout << "wins" << std::endl;}
        else {std::cout << "losses" << std::endl;}
    }
}
int isPallin(int x) {
    int d, r = 0, n;
    n = x;
    while(n > 0) {
        d = n % 10;
        r = (r * 10) + d;
        n /= 10;
    }
    if(r == x) {return 1;}
    else {return 0;}
}