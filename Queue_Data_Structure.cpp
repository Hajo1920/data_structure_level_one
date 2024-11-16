#include <iostream>
#include <queue>

using namespace std;

/*Queue Data Structure is another c++ STL that works vise versa of Stack Data Structure
Queue works in the term FIFO (First In First Out)
*/

int main(){

    queue<int> qNums;
    qNums.push(10);
    qNums.push(20);
    qNums.push(30);
    qNums.push(40);

    cout << "Count: " << qNums.size() << endl;
    cout << "First Entered element: " << qNums.front() << endl;
    cout << "Last Entered element: " << qNums.back() << endl;

    while(!qNums.empty()){
        cout << qNums.front() << endl;

        qNums.pop();
    }

    return 0;
}