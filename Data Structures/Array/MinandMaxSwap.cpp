#include <bits/stdc++.h>
using namespace std;

void minmaxSwap ( int arr[], int size) {
    int minIndex, maxIndex;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            minIndex = i;
        }

        if (arr[i] > largest) {
            largest = arr[i];
            maxIndex = i;
        }
    }
    // Swapping the smallest and largest elements
    swap(arr[minIndex], arr[maxIndex]);
}

int main() {
    int arr[] = {4, 7, 8, 2, 1};
    int size = 5;

    cout<< "Array before Swap: ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    minmaxSwap(arr, size);
    
    cout<< "Array after Swap: ";
    for (int i = 0; i < size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}   