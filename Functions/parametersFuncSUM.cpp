#include <iostream>
using namespace std;

//sum of two numbers
int sumNum (int a, int b){
    int sum = a+b;
    return sum;
}

//minimum of two number 
int minOfTwoNum(int x, int y){
    if ( x<y) {
        return x;
    }else{
        return y;
    }
}

int main() {
    cout<< sumNum(10,15) <<endl;   
    cout<< minOfTwoNum(7,6) << " is minimum."<< endl; 
}