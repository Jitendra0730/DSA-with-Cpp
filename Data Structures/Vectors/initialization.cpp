#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<int> vec; // Declare an empty vector of integers
    
    // Declaring vector with values
    vector<int> vecVal = {1, 2, 3, 4, 5, 6};
    cout<<vecVal[0]<<" ";
    cout<<vecVal[1]<<" ";
    cout<<vecVal[2]<<" ";          // printing elements of the vector
    cout<<vecVal[3]<<" ";
    cout<<vecVal[4]<<" ";
    cout<<vecVal[5]<<" ";
    cout<<endl;

    // Declaring Vector with size and default value 
    vector<int> valVal(5, 7); // Vector of size 5, initialized with value 7
    cout<<"The valVal vector values are: ";
    // for loop for printing elements of valVal
    for (int i = 0; i < 5; i++) {
        cout<< valVal[i] << " ";
    }

    // Declaring character vector
    vector<char> charVec = {'a', 'b', 'c', 'd'};
    cout<<endl<<"The charVec vector values are: ";
    // for loop for printing elements of charVec
    for (int i = 0; i < 4; i++) {
        cout<< charVec[i] << " ";
    }
    return 0;
}