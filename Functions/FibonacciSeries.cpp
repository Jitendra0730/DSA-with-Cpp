#include <iostream>
using namespace std;

int fibonacciSeries(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Series: ";

    for (int i = 0; i < n; ++i) {
        cout << first << " ";
        next = first + second;
        first = second;
        second = next;
    }
    cout<<endl;
    return 0;
}

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    fibonacciSeries(n);
}
