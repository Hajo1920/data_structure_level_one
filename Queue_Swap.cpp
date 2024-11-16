#include <iostream>
#include <queue>

using namespace std;


int main(){

    queue<int> qNums;
    queue<int> qNums2;

    qNums.push(10);
    qNums.push(20);
    qNums.push(30);
    qNums.push(40);

    qNums2.push(1000);
    qNums2.push(2000);
    qNums2.push(3000);
    qNums2.push(4000);

    qNums.swap(qNums2);



    cout << "qNums: ";
    while(!qNums.empty()){
        cout << qNums.front() << endl;

        qNums.pop();
    }

cout << "qNum2: ";
while(!qNums2.empty()){
        cout << qNums2.front() << endl;

        qNums2.pop();
    }
    return 0;
}