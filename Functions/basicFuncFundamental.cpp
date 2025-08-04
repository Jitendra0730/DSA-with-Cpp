#include<iostream>
using namespace std;
//Creating a void Function printName to perform the task of printing Name 'Jitendra'
//this whole logic of function is known as definition
void printName() {
    cout<<"Jitendra\n";
}

int printSurname() {
    cout<<"Chaudhary\n";

    return 7;
}

int main() {

    cout<<"My name is :"<<endl;
    //Function call / invoke
    printName();      
    printName();
    printName();
    printName();
    printName();
    printName();
    //we can call function as many time as we want       
    
    //we can return the value of the function 
    cout<<printSurname()<<endl;

    //also we can store the return value in Variable then print it
    int valNum = printSurname();
    cout<<"value is :"<< valNum <<endl;

    return 0;
}