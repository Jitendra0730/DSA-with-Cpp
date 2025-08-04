#include <iostream>
using namespace std;

int revInt(int n) {
    int revNum = 0, rem;

    while (n>0) {
        rem = n%10;
        revNum = revNum * 10 + rem;
        n = n/10;
    }
    return revNum; 
}

int main() {
    int n;
    cout<<"Enter a Num:"<<endl;
    cin>>n;

    cout<<revInt(n);
    
    return 0;
}