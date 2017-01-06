#include <iostream>

void squares(int);

int main(int argc, char *argv[]) {
    int t, b;
    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        std::cin >> b;
        squares(b);
    }
}
void squares(int base) {
    int s = (base / 2) - 1;
    int n = 0;
    for(int i = s; i > 0; i --) {
        n += i;
    }
    std::cout << n << std::endl;
}