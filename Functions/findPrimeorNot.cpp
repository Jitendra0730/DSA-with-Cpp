#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    for ( int i=2; i<=(n-1); i++) {
        if (n%i==0) 
            return false;
    }
    return true;
}

int main() {
    int num;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    if (isPrime(num)) {
        cout<<num<<" is a prime."<<endl;
    }
    else {
        cout<<num<<" is not a prime."<<endl;
    }

    return 0;
    
}