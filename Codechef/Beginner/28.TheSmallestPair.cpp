#include <iostream>

void accept();
void smallestPair(int [], int);

int main(int argc, char *argv[]) {
    accept();
    return 0;
}
void accept() {
    int t, n;
    int numbers[100000];
    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        std::cin >> n;
        for(int j = 0; j < n; j ++) {
            std::cin >> numbers[j];
        }
        smallestPair(numbers, n);
    }
}
void smallestPair(int x[100000], int size) {
    int firstSmallest, secondSmallest;
    int min = 999999, index = 0;
    for(int i = 0; i < size; i ++) { if(x[i] < min) {min = x[i]; index = i;} }
    firstSmallest = min; min = 999999;
    for(int i = 0; i < size; i ++) { if((x[i] < min) && (i != index)) {min = x[i];} }
    secondSmallest = min;
    std::cout << (firstSmallest + secondSmallest) << std::endl;
}