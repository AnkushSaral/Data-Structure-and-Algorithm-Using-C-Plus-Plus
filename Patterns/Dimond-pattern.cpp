#include <iostream>
using namespace std;



int main(){



// Hollow Dimond Pattern

// input n = 4

// output =             *
//                   *     *
//                 *          *
//               *              *
//                 *          *
//                   *     *
//                      *

// We divide it into 2 parts
//                      *
//                   *     *
//                 *          *
//               *              *
//          --------------------------
//                 *          *
//                   *     *
//                      *


int n = 4;

// Logic for the top part
for(int i = 0; i < n; i++){
    
    //For spaces
    for(int j = 0; j < n - i - 1; j++){
        cout << " ";
    }

    //For star
    cout << "*";


    if(i != 0){
        //For spaces
        for(int j = 0; j < 2 * i - 1; j++){
            cout << " ";
        }

        //For star
        cout << "*";
    }

    cout << endl;

}



// Logic for the bottom part
for(int i = 0; i < n-1; i++){
    
    //For spaces
    for(int j = 0; j < i + 1; j++){
        cout << " ";
    }

    //For star
    cout << "*";


    if(i != n-2){

        //For spaces
        for(int j = 0; j < 2 *(n-i) - 5; j++){
            cout << " ";
        }

        //For star
        cout << "*";
    }

    cout << endl;

}









return 0;
}