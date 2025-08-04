#include <iostream>
using namespace std;

int main() {
    int n, countNum = 1, sumNum = 0, odd = 1;
    cout << "Enter 'N' ";
    cin >> n;
    while (countNum <= n)
    {
        sumNum = sumNum + odd;
        odd = odd + 2;
        countNum = countNum + 1;
    }
    cout << sumNum;
    return 0;
}
