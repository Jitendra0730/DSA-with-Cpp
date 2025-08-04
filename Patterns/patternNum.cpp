#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 1; i<=n; i++){   //outer loop for coloumns
        for (int j = 1; j<=n; j++){    //inner loop for printing in rows
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}