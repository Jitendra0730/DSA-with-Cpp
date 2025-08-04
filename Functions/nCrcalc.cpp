#include <iostream>
using namespace std;

int factCalc(int n) {
    int fact = 1;
    for (int i = 1; i<=n; i++) {
        fact = fact*i;
    }
    return fact;
}

int nCr(int n, int r) {
    int fact_n = factCalc(n);
    int fact_r = factCalc(r);
    int fact_nMr = factCalc(n-r);
    
    return fact_n / (fact_r * fact_nMr);
}

int main() {
    int n = 6, r = 3;
    cout<<nCr(n,r);
    
    return 0;
}