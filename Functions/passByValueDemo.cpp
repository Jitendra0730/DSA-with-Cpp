#include <iostream>
using namespace std;

//Pass by value : copy of argument pass to the functionn 
int sum(int a, int b) {
    a+=10;
    b+=10;                 // those update in function() doenst affect the main() variable 
    return a+b;
}

int main() {
    int a = 5, b = 4;
    cout<<sum(a,b)<<endl;

    cout<<a<<endl;
    cout<<b<<endl;
    
    return 0;
}