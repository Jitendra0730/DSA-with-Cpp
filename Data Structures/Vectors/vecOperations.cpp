#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Declaring Empty vector
    vector<int> values;

    // printing the size of the empty vector
    cout<<"Size of the vector is :"<<values.size()<<endl;         // Size Fucntion 

    // Inserting elements into the vector
    values.push_back(10);
    values.push_back(20);          // push_back or Inserting Function
    values.push_back(30);

    // Printing the size of the vector after insertion
    cout<<"Size of the vector after insertion is :"<< values.size()<<endl;

    // printing the elements of the vector 
    cout<< "The elements are:";
    for (int i = 0; i < values.size(); i++) {
        cout<< values[i]<< " ";
    }
    cout<<endl;

    // deleting the last element of the vector
    values.pop_back();

    cout<<"The elements after Deletion are:";
    for (int i = 0; i < values.size(); i++) {
        cout<<values[i]<<" ";
    }
    
    //size of the vector after deletion
    cout<<endl<<"size of the vector after deletion is : "<<values.size()<<endl;

    // Print the first element of the vector 
    cout<<"The first element is :"<< values.front()<<endl;

    // Print the last element of the vector
    cout<<"The last element is :"<< values.back()<<endl;

    // Accessing elements using at() function
    cout<<"the first element:"<<values.at(0)<<endl;
    return 0;
}