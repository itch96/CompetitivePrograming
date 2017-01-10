#include <iostream>

int main(void) {
    int t, a, b;
    std::cin >> t;
    while(t --) {
        std::cin >> a >> b;
        if(a > b) {std::cout << ">" << std::endl;}
        else if(a < b) {std::cout << "<" << std::endl;}
        else if(a == b) {std::cout << "=" << std::endl;}
    }
}