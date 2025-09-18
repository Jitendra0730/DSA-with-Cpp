#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;  //Pointer Initialzation using * Operator

    //pointer Type should be same as variable type
    cout<< "Address of a:" << &a << endl;
    cout<< "Address of a stored in pointer :" << ptr << endl;
    cout<< "Address of pointer ptr:" << &ptr << endl;

    return 0;
}