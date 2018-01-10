#include <iostream>
#include <cmath>

void accept();
void findRoot(int);

int main(int argc, char *argv[]) {
    accept();
    return 0;
}
void accept() {
    int t, n;
    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        std::cin >> n;
        findRoot(n);
    }
}
void findRoot(int x) {
    int root = pow(x, 0.5);
    std::cout << root << std::endl;
}