#include <iostream>

void accept();
void smallestNumberOfNotes(int);

int main(int argc, char *argv[]) {
    accept();
    return 0;
}
void accept() {
    int t, n;
    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        std::cin >> n;
        smallestNumberOfNotes(n);
    }
}
void smallestNumberOfNotes(int x) {
    // available Notes: 1, 2, 5, 10, 50, 100
    int notes[6] = {100, 50, 10, 5, 2, 1};
    int n = 0, i = 0;
    while(i < 6) {
        if(notes[i] <= x) {x -= notes[i]; n ++;}
        else {i ++;}
    }
    std::cout << n << std::endl;
}