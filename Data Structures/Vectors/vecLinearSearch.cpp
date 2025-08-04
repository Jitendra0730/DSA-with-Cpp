#include <iostream>
#include <vector>
using namespace std;

int vecLinearSearch(int target, const vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] == target) {
            return i;    // Return the index value if found.
        }
    }
}

int main() {
    vector<int> vec = {4, 2, 7, 8, 1, 5};
    int target = 1;

    cout << vecLinearSearch(target, vec) << endl;

    return 0;
}