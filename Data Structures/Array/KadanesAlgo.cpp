#include <iostream>
#include <vector> 

using namespace std;

int main () {
    int arr[] = {3, -4, 5, 4, -1, 7, -8};
    int n = 7;

    int currSum = 0, maxSum = INT8_MIN;
    
    // Using Kadane's Algorithm

    for (int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if ( currSum < 0) {
            currSum = 0; // Reset current sum if it becomes negative
        }
    }

    cout<<"Maximum Subarray Sum is : " <<maxSum << endl;
    return 0;
}