#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> stkOne;
    stack<int> stkTwo;

    stkOne.push(10);
    stkOne.push(20);
    stkOne.push(30);
    stkOne.push(40);

    stkTwo.push(50);
    stkTwo.push(60);
    stkTwo.push(70);
    stkTwo.push(80);

    stkOne.swap(stkTwo); // all elements of stkOne will be swaped to stkTwo and vise versa

    cout << "StkOne: ";
    while(!stkOne.empty()){
        cout << stkOne.top() << " ";
        stkOne.pop();
    }

    cout << endl;

    cout << "StkTwo: ";
     while(!stkTwo.empty()){
        cout << stkTwo.top() << " ";
        stkTwo.pop();
    }


    return 0;
}