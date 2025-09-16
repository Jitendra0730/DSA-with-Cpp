#include <iostream>
using namespace std;

// Calculating factorial of a number N

int factNum(int n) {  //recursive function
    if (n == 0) {
        return 1;
    }

    return n * factNum(n-1);    //calling itself
}

int main() {
    int n;
    cout<<"Enter a number:- ";
    cin>>n;

    cout<<factNum(n);
    return 0;
}