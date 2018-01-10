#include <iostream>

int main(void) {
    int t, quantity, price;
    double amount;
    std::cin >> t;
    while(t --) {
        std::cin >> quantity >> price;
        amount = quantity * price;
        if(quantity >= 1000) {amount -= 10 * amount / 100;}
        printf("%lf\n", amount);
    }
}