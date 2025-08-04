#include <iostream>
#include <vector>
using namespace std;

void revVec(vector<int>& vec) {
    int start = 0, end = vec.size() - 1;
    while (start < end) {
        swap(vec[start], vec[end]);
        start++;
        end--;
    }
}

int main() {
    vector<int> vec = {4, 2, 7, 5, 8, 1};

    cout<<"Vector Before Reversal:";

    for (int i = 0; i < vec.size(); i++) {
        cout<<vec[i] << " ";
    }
    cout<<endl;
    
    revVec(vec);

    cout<<"Reversed Vector is:";

    for (int i = 0; i < vec.size(); i++) {
        cout<<vec[i] << " ";
    }

    return 0;
}