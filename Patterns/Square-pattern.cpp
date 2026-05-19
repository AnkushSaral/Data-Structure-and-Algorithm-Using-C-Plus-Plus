
// Square Pattern

// Input: n = 4

// Output:
// 4 4 4 4
// 4 4 4 4
// 4 4 4 4
// 4 4 4 4


#include <iostream>
using namespace std;



int main(){
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;

    for (int i = 0; i < n; i++){
    
        for (int j = 0; j < n; j++){
        cout << n << " ";
    }
        cout << endl;

    }
}