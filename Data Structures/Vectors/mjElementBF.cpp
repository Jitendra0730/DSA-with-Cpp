#include <iostream>
#include <vector>

using namespace std;

int majorityElement (vector<int> nums) {
    int n = nums.size();

    for ( int i= 0; i < n; i++) {
        int freq = 0;

        for ( int j = 0; j < n; j++) {
            if( nums[i] == nums[j]) {
                freq++;
            }
        }
        if ( freq > n / 2) {
            return nums[i];
        }
    }
}

int main() { 
    vector<int> nums = {2, 2, 1, 1, 1};

    cout<<majorityElement(nums);

    return 0;
}
