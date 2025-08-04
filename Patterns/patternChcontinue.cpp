#include <iostream>
using namespace std;

int main() {
    int n = 4;
    char ch = 'A';

    for (int i = 1; i<=n; i++){    //outer loop for coloumns

        for (int j = 1; j<=n; j++){    //inner loop for printing in rows

            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}