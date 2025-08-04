#include <iostream>
using namespace std;

int main() {
    int n = 5; 

    for (int i = 1; i<=n; i++){   //outer loop for coloumns
        char ch='A';     //for printing A already in each line

        for (int j = 1; j<=n; j++){    //inner loop for printing in rows
            cout<<ch<<" ";
            ch+=1;
            
        }
        cout<<endl;
    }
    return 0;
}