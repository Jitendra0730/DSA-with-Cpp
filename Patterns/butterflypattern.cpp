#include <iostream>
using namespace std;

int main() {
    int n=4;

    for(int i=0; i<n; i++) {
        for (int j=0; j<i+1; j++) {
            cout<<"*";
        }

        for (int j=n+2*(1-i); j>0; j--) {
            cout<<" ";
        }
        
        for (int j=0; j<i+1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
    for (int i=0; i<n; i++) {
        //spaces
        for (int j=n; j>i; j--){
            cout<<"*";
        }
        for (int j = 1; j <= 2 * i; j++) {
            cout << " ";
        }
        for (int j=0; j<n-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}