#include <iostream>
using namespace std;

//factorial of N numbers
int factNum(int n) {
    cout<<"Enter N: "<<endl;
    cin>>n;
    int fact = 1;
    for (int i=1; i<=n; i++) {
        fact = fact*i;
    }
    return fact;
}

int main() {
    cout<<factNum(4)<<endl;
    return 0;
}