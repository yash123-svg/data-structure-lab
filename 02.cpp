#include <iostream>
using namespace std;

class Information
{
    public:
    string name;
    int rollno;
    float marks;





    void display() {
        cout << "\n";
        cout<< "Name of Student: "<<name << "\n";
        cout<< "Roll number of Student: "<<rollno << "\n";
        cout<< "Marks of Student: "<<marks;
    }
};

int main() {


    Information student;
    cout<< "Enter your name: ";
    cin>> student.name;
    cout<< "Enter your Roll no.: ";
    cin>> student.rollno;
    cout<< "Enter your Marks: ";
    cin>> student.marks;

    student.display();
    return 0;
