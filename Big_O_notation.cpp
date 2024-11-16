#include <iostream>
#include <string>

using namespace std;

/*

Big O (or Big O notation) is the a way of algebric measuring or assuming relativity 
Between Time(run time) and Space(memory space) complexity of a specific Algorithm.

Big O does'nt provied you how much time or speed an algorithm will score.

While there are more 

The four Popular BigO functions are:
1. Constant Time Function = O(1) means time will be constant despite the input amount
2. Linear Time Function = O(n) means time will increase linearly as long as input increases
3. Logarithmic Time Funciton = O(log n) means time will decrease by half of input
4. Quadratic Time Function = O(n^2) means time will increase double of input provided



*/

string ConstantTimeFunctionBigO(string arr[]){ // O(1)
    // returns the last elemtn of a specific arr
    return arr[arr->length()-1];
}

string LinearTimeFunctionBigO(string arr[]){ // O(n)
// returns the last elemtn of a specific arr
    int n = arr->length();
    string str = "";

    for(int x = 0; x < n; x++){
        if(x == n-1){
            str =  arr[x];
        }
    }

    return str;
}

string QuadraticTimeFunctionBigO(string arr[]){ // O(n^2)
// returns the last elemtn of a specific arr
    int n = arr->length();
    string str = "";

    for(int x = 0; x <= n; x++){
        for(int y = 0; y < n; n++){
            if(x == n){
                y = x;
                str = arr[y];
            }
        }
    }
    return str;

}

void LogarithmicTimeFunctionBigO(){ // O(log n)

    int n = 100;
    
    while(n > 0){
        n = n /2;
        cout << n << endl;
    }
}


int main(){

    return 0;
}