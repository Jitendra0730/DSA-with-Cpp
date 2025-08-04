#include <iostream>
using namespace std;

//sum 1 to N
int sumNum() {        
    int sum = 0;
    int n;
    cout<<"Enter NUM n : "<< endl;
    cin>>n;

    for ( int i = 0; i<=n; i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
}

int main() {
    sumNum();
    return 0;
}