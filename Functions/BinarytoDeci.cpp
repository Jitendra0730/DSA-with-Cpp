#include <iostream>
using namespace std;

int binToDeci(int binNum) {
    int ans = 0, pow = 1, rem;

    while (binNum>0)
    {
        rem = binNum % 10;
        ans = ans + rem * pow;

        binNum = binNum / 10;
        pow  = pow * 2;
    }
    return ans;
}

int main() {

    int num;
    cout<<"Enter a Binary Number:"<<endl;
    cin>>num;

    cout<<binToDeci(num)<<endl;
    
    return 0;
}