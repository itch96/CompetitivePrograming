#include <iostream>

void accept();
void validity(int []);

int main(int argc, char *argv[]) {
    accept();
    return 0;   
}
void accept() {
    int t, angles[3];
    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        for(int j = 0; j < 3; j ++) {
            std::cin >> angles[j];
        }
        validity(angles);
    }
}
void validity(int a[]) {
    int sum = 0;
    for(int i = 0; i < 3; i ++) {
        if(a[i] > 0) {
            sum += a[i];
        }
        else {sum += 500;}
    }
    if(sum == 180) {std::cout << "YES" << std::endl;}
    else {std::cout << "NO" << std::endl;}
}