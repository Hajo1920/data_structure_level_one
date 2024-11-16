#include <iostream>
#include <map>

using namespace std;

/*
Map is one of the Standard Template Library (STL) which is considered as a data structure.
Map is similar to array but with different behavior, containing data as key and value pair
the key is used as we use index in array to get specific element.
In Map keys must be unique, otherwise data override will happen
*/

int main(){

    map<string, int> StudentGrades;
    StudentGrades["Ahmed"] = 99;
    StudentGrades["Mohammed"] = 95;
    StudentGrades["Muna"] = 98;
    StudentGrades["Semir"] = 90;

    // list data by iteration
    for(auto &pair: StudentGrades){
        cout << "Name: " << pair.first << "Grade: " << pair.second << endl; 
    }

    // find specific data using key
    string studentName = "Ahmed";

    if(StudentGrades.find(studentName) != StudentGrades.end()){
        cout << "Name: " << studentName << "Grade: " << StudentGrades[studentName] << endl;
    }else{
        cout << "No information found" << endl;
    }

     studentName = "Jimi";

    if(StudentGrades.find(studentName) != StudentGrades.end()){
        cout << "Name: " << studentName << "Grade: " << StudentGrades[studentName] << endl;
    }else{
        cout << "No information found" << endl;
    }

    return 0;
}