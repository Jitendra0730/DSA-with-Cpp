#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int ans = 0;

    for (int i = 0; i < nums.size(); i++) {
        ans = ans ^ nums[i];    // XOR Operation
    }

    cout<<"The single number in the vector is :"<< ans <<endl;
    return 0;
}