#include <iostream>

void accept();
void findSecondLargest(int []);

int main(int argc, char *argv[]) {
    accept();
    return 0;
}
void accept() {
    int t;
    int numbers[3];
    std::cin >> t;
    for(int i = 0; i < t; i ++) {
        for(int j = 0; j < 3; j ++) {std::cin >> numbers[j];}
        findSecondLargest(numbers);
    }
}
void findSecondLargest(int nums[3]) {
    // sort the array and print the middle number
    for(int i = 0; i < 3; i ++) {
        for(int j = (i + 1); j < 3; j ++) {
            if(nums[j] > nums[i]) {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    std::cout << nums[1] << std::endl;
}