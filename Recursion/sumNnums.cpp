#include <iostream>
using namespace std;   

// Function to calculate the sum of first n natural numbers using recursion

int sum(int n) {
    if ( n == 1) {
        return 1;
    }

    return (n + sum(n-1));
}

int main() {
    int n;
    cout<<"Enter a Number:- ";
    cin>>n;

    cout<<sum(n)<<endl;

    return 0;
}