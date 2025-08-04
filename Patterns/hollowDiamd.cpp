#include<iostream>
using namespace std;

int main() {

    int n = 4;

    //Top part
    for ( int i=0; i<n; i++) {
        //spaces
        for (int j=0; j<n-i-1; j++) {
            cout<<" ";
        }
        //star
        cout<<"*";
        //condition to print only 1 star at the top 
        if ( i != 0) {
            //middle spaces
            for (int j=0; j<(2*i-1); j++) {
                cout<<" ";
            }
            //star at the end
            cout<<"*";
        }
        cout<<endl;
    }

    //Bottom part
    for (int i=0; i<(n-1); i++) {
        //spaces
        for (int j=0; j<i+1; j++){
            cout<<" ";
        }
        //star at the start
        cout<<"*";
        //condition for the bottom single star
        if (i!= (n-2)) {
            //spaces mid
            for (int j=0; j<(2*(n-i)-5); j++) {
                cout<<" ";
            }
            //star at the end
            cout<<"*";
        }
        cout<<endl;               
    }
    return 0;
}