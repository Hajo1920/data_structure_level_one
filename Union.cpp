#include <iostream>


using namespace std;

/*
Union is one of data structures that is used as a container for different data types [similar to struct],
But the main difference of Union is every members of union are stored in one memory cell, and
the memory size is determined by the largest data type in the group.
this can make our program to save memory spaces, but we must be carefull with unions
because sometimes they can lead to undefined behaviour due to confilicts happen by developers
*/

union myUnion{
    int intVal;
    float fltVal;
    char charVal;
 
};

int main(){
    myUnion setUnion;

    setUnion.intVal = 25;
    cout << "Interger value: " << setUnion.intVal << endl;

    setUnion.charVal = 'A';
    cout <<"Character value: " << setUnion.charVal << endl;

    setUnion.fltVal = 3.14f;
    cout << "Float value: " << setUnion.fltVal << endl;
    return 0;
}
