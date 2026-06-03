#include<iostream>
using namespace std;

class Student{    //class = blueprint 
    public: 
        string name;   //data members
        int rollNo;
        int semester;

        void display() {   //member function
            cout << "Name: " << name  << ", Roll: " << rollNo << ", Semclear:" << semester << endl; 
         }
};

int main() {

    Student s1,s2,s3;   //s1 is an object/instance of the class / 
    s1.name = "yameen";
    s1.rollNo = 123;
    s1.semester = 2;
     
    s2.name = "Abdullah";
    s2.rollNo = 11;
    s2.semester = 4;
   
    s3.name = "Abdul Rehman";
    s3.rollNo = 12;
    s3.semester = 5;

    s2.display();
    s1.display();
    s3.display();

   cout << "Size of s1: " << sizeof(s1) << " bytes" << endl;
   
   cout << "Size of s1:name: " << sizeof(s1.name) << " bytes" << endl;
   cout << "Size of s1:rollno: " << sizeof(s1.rollNo) << " bytes" << endl;
   cout << "Size of s1:semester: " << sizeof(s1.semester) << " bytes" << endl;
    return 0;
}