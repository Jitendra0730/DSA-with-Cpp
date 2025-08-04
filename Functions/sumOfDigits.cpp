#include <iostream>
using namespace std;

//Sum of digits of N number
int sumDigit(int n) {
    int digit = 0, lastDigit;
    while (n>0)
    {
        lastDigit = n%10;
        n=n/10;
        digit = digit + lastDigit;
    }
    return digit;
}

int main() {
    cout<<sumDigit(143)<<endl;
    return 0;
}