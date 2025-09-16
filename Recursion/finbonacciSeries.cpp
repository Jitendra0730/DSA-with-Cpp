#include <iostream>
using namespace std;

// Function to calculate the Fibonacci number at a given position N 

int fib(int n) {
    if (n==0||n==1) {
        return n;
    }

    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout<<"Enter the position N:- ";   
    cin>>n;

    cout<<fib(n);

    return 0;
}