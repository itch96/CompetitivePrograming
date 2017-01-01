#include <iostream>

void accept();
void reverse(long);

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
        reverse(n);
    }
}
void reverse(long x) {
    long a = x;
    long r = 0;

    while(a > 0) {
        int d = a % 10;
        r = (10 * r) + d;
        a /= 10;
    }

    std::cout << r << std::endl;
}