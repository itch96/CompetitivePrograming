#include <iostream>

void accept();
void factorial(int);

int main(int argc, char *argv[]) {
    accept();
    return 0;
}
void accept() {
    int t, n;
    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        std::cin >> n;
        factorial(n);
    }
}
void factorial(int x) {
    long fact = 1;
    if(x == 0) {fact = 1;}
    else {
        for(int i = x; i > 1; i --) {
            fact *= i;
        }
    }
    std::cout << fact << std::endl;
}