#include <iostream>
#include <vector>

using namespace std;

int maxSubarraySum(int n, int arr[]) {
    int maxSum = INT8_MIN;

    for (int st = 0; st < n; st++) {
        int currSum = 0;
        for (int end = st; end < n; end++) {
            currSum += arr[end];
            maxSum = max(maxSum, currSum);
        }
    }
    return maxSum;
}

int main() {

    // Brute Forse Approach

    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;
    cout<<"Maximum Subarray Sum is : " << maxSubarraySum(n, arr)<<endl;
   
    return 0;
}