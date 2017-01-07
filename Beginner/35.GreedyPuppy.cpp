#include <iostream>

void accept();
int main(void) {
    accept();
    return 0;
}
void accept() {
    int t, n, k;
    std::cin >> t;
    while(t --) {
        std::cin >> n >> k;
        int max = 0;
        for(int j = 1; j <= k; j ++) {
            if((n % j) > max) {max = (n % j);}
        }
        std::cout << max << std::endl;
    }
}