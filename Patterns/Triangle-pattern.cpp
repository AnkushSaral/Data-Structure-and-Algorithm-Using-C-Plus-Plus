#include <iostream>
using namespace std;



int main(){


// Triangle Pattern

//Type 1

// Input: n = 4
// Output: // *
           // * *
           // * * *
           // * * * *

    // Code for type 1
    // int n;
    // cout << "Enter the size of the triangle pattern: ";
    // cin >> n;

    // for (int i = 0; i < n; i++){
    
    //     for (int j = 0; j <= i; j++){
    //     cout << "*" << " ";
    // }
    //     cout << endl;

    // }




//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++





//Type 2

// Input: n = 4
// Output: // 1
           // 22
           // 333
           // 4444

    //Code for type 2
    // int n;
    // cout << "Enter the size of the triangle pattern: ";
    // cin >> n;

    // for (int i = 0; i < n; i++){
    
    //     for (int j = 0; j <= i; j++){
    //     cout << (i + 1) << " ";

    // }
    //     cout << endl;

    // }





//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++





//Type 3

// Input: n = 4
// Output: // 1
           // 12
           // 123
           // 1234

    //Code for type 3
    // int n;
    // cout << "Enter the size of the triangle pattern: ";
    // cin >> n;

    // for (int i = 0; i < n; i++){
    
    //     for (int j = 0; j <= i; j++){
    //     cout << (j + 1) << " ";

    // }
    //     cout << endl;

    // }









//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++





//Type 4 - Reverse Triangle

// Input: n = 4
// Output: // 1
           // 21
           // 321
           // 4321

    //Code for type 4
    // int n;
    // cout << "Enter the size of the triangle pattern: ";
    // cin >> n;

    // for (int i = 0; i < n; i++){
    
    //     for (int j = i; j >= 0; j--){
    //     cout << (j + 1) << " ";

    // }
    //     cout << endl;

    // }





//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++





//Type 5 - Floyd's Triangle

// Input: n = 4
// Output: // 1
           // 23
           // 456
           // 78910

    //Code for type 5
    // int n;
    // cout << "Enter the size of the triangle pattern: ";
    // cin >> n;

    // int count = 1;
    // for (int i = 0; i < n; i++){
    
    //     for (int j = 0; j <= i; j++){
    //     cout << count << " ";
    //     count++;

    // }
    //     cout << endl;

    // }










//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++





//Type 6 - Inverted Triangle - 1

// Input: n = 4
// Output: // 1111
           // 222
           // 33
           // 4

    //Code for type 6 - 1
    // int n;
    // cout << "Enter the size of the triangle pattern: ";
    // cin >> n;

    // for (int i = 1; i <= n; i++){
    
    //     for (int j = n; j >= i; j--){
    //     cout << i << " ";
    // }
    //     cout << endl;

    // }






//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++





//Type 6 - Inverted Triangle - 2

// Input: n = 4
// Output: // 1111
           //  222
           //   33
           //    4

    //Code for type 6 - 2
    // int n;
    // cout << "Enter the size of the triangle pattern: ";
    // cin >> n;

    // // Here i works as spaces counter as well like how many times spaces print in each row
    // for (int i = 0; i < n; i++){
    
    //     for (int j = 0; j < n; j++){
        
    //         if (i > j){
    //             cout << "  ";
    //         }
    //         else{
    //             cout << i + 1 << " ";
                
    //         }
    // }
    //     cout << endl;
        

    // }







//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++





//Type 7 

// Input: n = 4
// Output: //                   1
           //                 1 2 1
           //               1 2 3 2 1
           //             1 2 3 4 3 2 1
           // 
           
           
           //    For understanding the pattern of type 7, we can divide the pattern into two parts, first part is left triangle and second part is right triangle. The left triangle is increasing order of numbers and the right triangle is decreasing order of numbers. So we can use two loops to print the left triangle and right triangle separately. The first loop will print the left triangle and the second loop will print the right triangle. We also need to print spaces before printing the numbers to align the pattern properly. The number of spaces will be equal to the number of rows minus the current row number.             
           
           //                   1 |
           //                 1 2 |1
           //               1 2 3 |2 1
           //             1 2 3 4 |3 2 1
           // 

    //Code for type 7
    // int n;
    // cout << "Enter the size of the triangle pattern: ";
    // cin >> n;

    // // Here i works as spaces counter as well like how many times spaces print in each row
    // for (int i = 0; i < n; i++){
    

    //     //This loop will print spaces only
    //     for (int j = 0; j < n - i - 1; j++){
    //         cout << " ";
    //         }
 
 
    //     //This loop will print numbers of  first triangle
    //     for (int j = 0; j < i + 1; j++){
    //         cout << j+1;
    //         }
        
        
    //   //This loop will print numbers of  second triangle
    //     for (int j = i; j > 0; j--){
    //         cout << j;
    //         }


    //     cout << endl;
        

    // }



    return 0;
    
}