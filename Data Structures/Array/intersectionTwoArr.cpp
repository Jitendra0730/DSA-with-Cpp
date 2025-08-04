#include <bits/stdc++.h>
using namespace std;

void intersection(int arr1[], int size1, int arr2[], int size2) {
    for ( int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                cout<<arr1[i]<< " ";
                break; // To avoid printing duplicates
            }
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7};
    int arr2[] = {1, 3, 5, 7, 9, 11};
    int size1 = 7;
    int size2 = 6;

    cout<< "The intersection elements are: ";
    intersection(arr1, size1, arr2, size2);

    return 0;
}