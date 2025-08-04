#include <bits/stdc++.h>
using namespace std;

int largestNumArr() {
    int largest = INT16_MIN; // Initialize to minimum possible value
    int num[5] = {12, 5, 32, -7, 300};
    int index;

    for (int i = 0; i < 5; i++) {
        if (num[i] > largest) {
            largest = num[i]; // can also write largest = max(largest, num[i]);
            index = i;
        }
    }

    cout << "Index is: " << index << endl;
    return largest; // Return the largest number found
}

int main() {
    cout<<"The largest number in an array is: "<<largestNumArr()<<endl;
    return 0;
}