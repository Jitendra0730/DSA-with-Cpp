#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
    for (int i = 0; i<n; i++){    //outer loop for coloumns

        for (int j = i+1; j>0; j--){    //inner loop for printing in rows

            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}