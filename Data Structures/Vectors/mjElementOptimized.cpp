#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

    // This code finds the majority element in a vector in a optimized way

int majorityElement (vector<int> nums) {
    int freq = 0, ans = nums[0], n = nums.size();

    sort(nums.begin(), nums.end());

    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i-1]) {
            freq ++;
        }
        else {
            freq = 1;
            ans = nums[i];
        }
        if (freq > n/2) {
            return ans;
        }
    }
    return ans;
}

int main() { 
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout<<majorityElement(nums);

    return 0;
}
