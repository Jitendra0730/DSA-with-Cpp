#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i<=n; i++){   //outer loop for coloumns
        for (int j = 1; j<=n; j++){    //inner loop for printing in rows
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}