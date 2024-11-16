#include <iostream>

using namespace std;
/*
When we say matrix data structure, we are refering to 2D Array 

*/
int main(){

    int arr[3][3] = {{1,2,3}, {4,5,6}};

    arr[1][2] = 6; // this will have Big O of O(1) as we are assigining element directly from index

    for(int x = 0; x < 3; x++){
        for(int y = 0; y < 3; y++){
            cout << arr[x][y]<< endl;  // this will have Big O of O(n^2) becouse of two nested loops
        }
    }

    return 0;
}