#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n<=0) 
        return false;
    while ( n%2==0 ) {
            n = n/2;
    }
    return (n==1);
}

bool isPowerOfTwoBool(int n) {
    if (n<=0){
        return false;
    }
    bool result;
    result = n & (n-1);
    
    return (result == 0);
}

int main() {
    int n;
    cout<<"Enter a Num:"<<endl;
    cin>>n;

    cout<<isPowerOfTwoBool(n);
    
    return 0;
}