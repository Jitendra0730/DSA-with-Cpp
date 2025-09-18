#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;  //Pointer 'ptr' stores the address of variable 'a'
    int** ptr2 = &ptr;  //Pointer to Pointer 'ptr2' stores the address of pointer 'ptr'

    cout<<*(&a)<<endl;  //Dereferencing the address of 'a' gives the value of 'a'
    cout<<*(ptr)<<endl;  //Dereferencing 'ptr' gives the address of 'a' which have value 10
    cout<<*(ptr2)<<endl;  //Dereferencing 'ptr2' gives the address of 'ptr' which have address of 'a' as a value
    cout<<**(ptr2)<<endl;  //Double Dereferencing 'ptr2' gives the value of 'a' which is 10

    return 0;
}