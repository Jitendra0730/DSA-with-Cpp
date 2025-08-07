#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    // Finding the Majority Element using Moore's Voting Algorithm

int majorityElement (vector<int> nums) {
    int freq = 0, ans = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (freq == 0) {
            ans = nums[i];
        }
        if (ans == nums[i]) {
            freq ++;
        }
        else {
            freq --;
        }
    }
    return ans;
}

int main() { 
    vector<int> nums = {3, 3, 4, 2, 3, 3, 3};

    cout<<majorityElement(nums);

    return 0;
}
