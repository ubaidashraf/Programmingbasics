#include<iostream>
using namespace std;

void displayStudent(string name, int rollNo, int semester) {
    cout << "Name: " << name  << ", Roll: " << rollNo << ", Semclear:" << semester << endl; 
}
 
int main() {
 
    string name1, name2, name3;
    int rollNo1, rollNo2, rollNo3;
    int semester1, semester2, semester3;

    name1= "yameen";
    rollNo1 = 123;
    semester1 = 2;  

    name2 = "Abdullah";
    rollNo2 = 11;           
    semester2 = 4;

    name3 = "Abdul Rehman";
    rollNo3 = 12;
    semester3 = 5;


    displayStudent(name1, rollNo1, semester1);
    displayStudent(name2, rollNo2, semester2);
    displayStudent(name3, rollNo3, semester3);

    return 0;
}