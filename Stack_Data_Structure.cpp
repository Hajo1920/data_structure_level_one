#include <iostream>
#include <stack>

using namespace std;

/*
Stack is a C++ STL that works in the term of LIFO (Last In First Out)
The first pushed element will be poped out last and the last one first*/

int main(){
    stack<int> stkNums;
    stkNums.push(10); // entered first will show last or poped last
    stkNums.push(20);
    stkNums.push(30);
    stkNums.push(40);
    stkNums.push(50); // entered last will show first or poped first

    while(!stkNums.empty()){
        cout << stkNums.top() << endl; 

        stkNums.pop();
    }

    return 0;
}