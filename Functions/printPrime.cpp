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
    for (int i=2; i<=num; ++i) {
        if (isPrime(i)) {
        cout<<i<<" ";
        }
    }
    return 0;
}