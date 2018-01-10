#include <iostream>
int isPallindrome(int);
int main(void) {
    int t;
    std::cin >> t;
    while(t --) {
        int l, r, sum = 0;
        std::cin >> l >> r;
        for(int i = l; i <= r; i ++) {
            if(isPallindrome(i)) {
                sum += i;
            }
        }
        std::cout << sum << std::endl;
    }
}
int isPallindrome(int x) {
    int n = x;
    int r = 0;
    while(n > 0) {
        int d = n % 10;
        r = (r * 10) + d;
        n /= 10;
    }
    if(r == x) {return 1;}
    else return 0;
}