// wap to demonstrate the use of this pointer and null pointer
#include <iostream>
using namespace std;
class Student {
    string name;
    int roll;
    float marks;
public:
    Student(string n, int r, float m) {  
        this->name = n;                           //this pointer refers to current object of the class
        this->roll = r;
        this->marks = m;
    }
    void display() {
        cout << "Name: " << this->name << endl;
        cout << "Roll: " << this->roll << endl;
        cout << "Marks: " << this->marks << endl;
    }
};

int main() {
    Student s1("John", 101, 85.5);
    s1.display();
    Student* ptr = nullptr; 
    if (ptr == nullptr) {
        cout << "Pointer is null" << endl;
    }
    return 0;
}