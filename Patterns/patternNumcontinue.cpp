#include <iostream>
using namespace std;

int main() {
    int n = 3;
    int num = 1;

    for (int i = 1; i<=n; i++){    //outer loop for coloumns

        for (int j = 1; j<=n; j++){    //inner loop for printing in rows

            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}