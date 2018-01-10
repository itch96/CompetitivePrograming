#include <iostream>

int main(void) {
    int t;
    char c;
    std::cin >> t;
    while( t --) {
        std::cin >> c;
        if(c == 'B'|| c == 'b') {std::cout << "BattleShip" << std::endl;}
        else if(c == 'C' || c == 'c') {std::cout << "Cruiser" << std::endl;}
        else if(c == 'D' || c == 'd') {std::cout << "Destroyer" << std::endl;}
        else if(c == 'F' || c == 'f') {std::cout << "Frigate" << std::endl;}
    }
}