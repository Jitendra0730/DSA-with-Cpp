#include <bits/stdc++.h>
using namespace std;


int smallestNUminArr() {
    int smallest = INT16_MAX; // Initialize to maximum possible value
    int num[5]={12, 5, 32, -7, -30};
    int index;

    for (int i = 0; i < 5; i++) {
        if (num[i] < smallest) {
            smallest = num[i]; // can also write smallest = min(smallest, num[i]);
        }
        index = i;
    }

    cout<< "Index is : "<<index << endl;
    return smallest; // Return the smallest number found
}

int main() {
    
    cout<<"Smallest number in an array: " << smallestNUminArr() << endl;

    return 0;
}