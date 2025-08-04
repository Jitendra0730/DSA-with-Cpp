#include <bits/stdc++.h>
using namespace std;

int sumArr(int arr[], int size) {
    int sum = 0;
    int start = 0;
    while (start < size) {
        sum = sum + arr[start];
        start++;
    }
    return sum;
}

int productArr(int arr[], int size) {
    int product = 1;
    for(int i = 0; i < size; i++) {
        product = product * arr[i];
    }
    return product;
}

int main() {
    
    int arr[] = {4, 7, 8, 2, 1};
    int size = 5;

    cout<<"The sum of the array is: "<<sumArr(arr, size)<<endl;
    cout<<"The product of the array is: "<<productArr(arr, size)<<endl;

    return 0;
}