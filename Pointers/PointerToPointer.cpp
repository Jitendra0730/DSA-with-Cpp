#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;  //Pointer 'ptr' stores the address of variable 'a'
    int** ptr2 = &ptr;  //Pointer to Pointer 'ptr2' stores the address of pointer 'ptr'

    cout<<"Add of a:"<<&a<<endl;
    cout<<"Add of a stored in ptr:"<<ptr<<endl;
    cout<<"Add of ptr:"<<&ptr<<endl;
    cout<<"Add of ptr stored in ptr2:"<<ptr2<<endl;
    
    return 0;
}