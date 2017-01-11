#include <iostream>
int main(void) {
    double basic , hra, da, gross;
    int t;
    std::cin >> t;
    while (t--) {
        std::cin >> basic;
        if (basic < 1500) {
                hra = 0.10 * basic;
                da =  0.90  * basic;
        }
        else {
                hra = 500;
                da =  0.98 * basic;
        }
    gross = basic + hra + da;
    std::cout << gross << std::endl;
    }
    return 0;
} 