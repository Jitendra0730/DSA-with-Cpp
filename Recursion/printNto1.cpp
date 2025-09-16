#include <iostream>
using namespace std;

// Printing all numbers fron N to 1

void printNum (int n) {   //recusive function 
    if (n==1) {
        cout<<1;
        return;
    }
    cout<<n<<" ";
    printNum(n-1);    //calling itself
}

int main() {
    int n;
    cout<<"Enter a number:-";
    cin>>n;
    printNum(n);

    return 0;
}