#include <iostream>
using namespace std;

int main() {
    int n, countNum = 0, sumNum = 0, num = 1;
    cout << "Enter 'N' ";
    cin >> n;
    while (countNum < n)
    {
        if (num % 2 != 0) {       
            sumNum = sumNum + num;
            countNum = countNum + 1;
        }
        num = num + 1;
    }
    cout << sumNum;
    return 0;
}
