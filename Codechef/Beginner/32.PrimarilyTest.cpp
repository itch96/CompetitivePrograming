#include <iostream>

int isPrime(int);

int main(int argc, char *argv[]) {
    int t, n;
    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        std::cin >> n;
        if(isPrime(n)) {std::cout << "yes" << std::endl;}
        else {std::cout << "no" << std::endl;}
    }
}
int isPrime(int x) {
    int count = 0;
    for(int i = x; i > 0; i --) {
        if(x % i == 0) {count ++;}
    }
    if(count == 2) {return 1;}
    else return 0;
}