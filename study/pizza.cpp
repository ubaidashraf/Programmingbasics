#include<iostream>
using namespace std;

class Student{    //class = blueprint 
    public: 
        string name;   //data members
        int rollNo;
        int semester;

        void display() {   //member function
            cout << "Name: " << name  << ", Roll: " << rollNo << ", Semester:" << semester << endl; 
         }

    //special function called constructor 
    Student(string n) {
        name = n;
        rollNo = -1;
        semester =0;
    }
};

int main() {

    Student s1("Abdullah");
     s1.rollNo = 2;
    s1.semester = 4;
    
    
    Student s2("yameen");
    s2.rollNo = 3;
    s2.semester = 2;

    Student s3("AbdulRehman");
    s3.rollNo = 1;
    s3.semester = 5;
    
    s1.display();
    s2.display();
    s3.display();

    return 0;
}