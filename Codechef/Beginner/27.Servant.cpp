#include <iostream>

int main(int argc, char *argv[]) {
    int t;
    int n;
    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        std::cin >> n;
        if(n < 10) {std::cout << "What an obedient servant you are!" << std::endl;}
        else {std::cout << "-1" << std::endl;}
    }
}