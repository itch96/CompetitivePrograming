#include <iostream>
#include <cmath>

void accept();
void isPossible(float d, int c[3][2]);

int main(int argc, char *argv[]) {
    accept();
    return 0;
}
void accept() {
    int t;
    float range;
    int coordinates[3][2];

    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        std::cin >> range;
        for(int a = 0; a < 3; a ++) {
            for(int b = 0; b < 2; b ++) {
                std::cin >> coordinates[a][b];
            }
        }
        isPossible(range, coordinates);
    }
}
void isPossible(float d, int c[3][2]) {
    float distance[3];
    int counter = 0;

    distance[0] = pow(pow((c[0][1] - c[1][1]), 2) + pow((c[0][0] - c[1][0]), 2), 0.5);
    distance[1] = pow(pow((c[0][1] - c[2][1]), 2) + pow((c[0][0] - c[2][0]), 2), 0.5);
    distance[2] = pow(pow((c[1][1] - c[2][1]), 2) + pow((c[1][0] - c[2][0]), 2), 0.5);

    for(int i = 0; i < 3; i ++) { if(distance[i] > d) {counter ++;} }
    
    (counter <= 1) ? std::cout << "yes" << std::endl : std::cout << "no" << std::endl;
}