#include <iostream>
using namespace std;
const int a = 3;
double average(int nums[]) {
    double avg = 0;
    for(int i = 0; i < a; i++) {
        avg += nums[i];
    }
    return avg / a;
}

int main() {
    int nums[3];
    nums[0] = 10;
    nums[1] = 20;
    nums[2] = 30;
    cout << "Average: " << average(nums) << endl;
    return 0;
}