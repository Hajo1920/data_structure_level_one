#include <iostream>
#include <vector>

using namespace std;

/*
Array is one of the most important data structures that can store more than multiple data
in contaginous form.

Array can hold, digits(int, float, double,..), chars, string( which is array of collection of chars)
enums, structs, objects, etc..

But always the elements of an array must be homogenous (the same type)

we can search in array using specific algorithms
when we want a specific element of an array which we know its place 
we can search with Big O of O(1) by just providing the index of the element
or by loops(for,while) which willbe Big O of O(n)

In c++ we have two type of arrays which are we classify them as fixed array and dynamic array


*/


int main(){

    // fixed array 
    int fArr[10] = {10, 20, 30,40,50,60,70,80,90,100};

    // dynamic array (we can shrink or add at run time)
    vector<int> dArr =  {1,2,3,4,5,6,7,8,10};

    return 0;
}