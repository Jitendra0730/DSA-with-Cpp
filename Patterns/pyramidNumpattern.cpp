#include <iostream>
using namespace std;

int main() {
    int n = 4;

    for (int i = 0; i<n; i++) {
        //Spaces : n-i-1
        for (int j = 0; j<n-i-1; j++) {
            cout<<" ";
        }
        //Numbers set 1 : i+1
        for (int j=1; j<=i+1; j++) {
            cout<<j;
        }

        //Numbers set 2 : i to 1
        for (int j =i; j>=1; j--) {
            cout<<j;
        }
      
        cout<<endl;
    }
    
    return 0;
}