#include <bits/stdc++.h>
using namespace std;

int main() {
    
    // Initializing an array
    int arr[5];

    // Initializing the array with values
    int marks[5] = {85, 90, 78, 92, 88};

    // Initializing an array wihtout specifying size
    int scores[] = {100, 95, 85, 80};

    // Printing the elements of the marks array
    cout<< marks[0] << endl;

    // Printing all the elements of the scores array
    for (int i = 0; i < 4; i++) {
        cout << scores[i] << endl;
    }

    // Changing the value of an element in the marks array
    marks[0] = 100;

    cout<<"new Marks at index  0 is: " << marks[0] << endl;

    // Printing the size of the marks array in bytes
    int size = sizeof(marks);
    cout<<"Size of marks array in bytes:" << size << endl;

    // Printing the size of the scores array
    int sizeScores = sizeof(scores) / sizeof(scores[0]);
    cout<<"Size of scores array"<< sizeScores << endl;

    int sizeAge = 3;
    int age[sizeAge];

    for (int i = 0; i < sizeAge; i++) {
        cout<< "Enter 3 Ages: ";
        cin >> age[i];
    }

    for (int i = 0; i < sizeAge; i++) {
        cout<<age[i]<<endl;
    }



    return 0;
}