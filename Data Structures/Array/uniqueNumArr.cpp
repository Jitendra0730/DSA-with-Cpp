#include <bits/stdc++.h>
using namespace std;

void uniqueNumArr(int arr[], int size) {
    
    for ( int i=0; i < size; i++) {
        int count = 0;

        for (int j = 0; j < size; j++) {
            if ( arr[i] == arr[j]) {
                count++;
            }
        }
        if ( count == 1) {
            cout<<arr[i]<<" ";
        }
    }
}

int main() {
    
    int arr[] = {1, 1, 5, 2, 4, 2, 4, 7, 8, 1};
    int size = 10;

    cout<<"Uneique numbers in the array are: ";
    uniqueNumArr(arr, size);

    return 0;
}