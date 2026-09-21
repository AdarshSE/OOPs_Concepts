// Assume that the test result of a batch of students is stored in different classes. 
// The Student class stores the roll number, the Test class stores the marks obtained in two subjects, and the Result class contains the total marks obtained in the test.
// The Result class can inherit the details of marks obtained in the test and the roll number of the students through multilevel inheritance. Write a C++ program to implement this.
#include <iostream>
using namespace std;

class Student {
protected:
    int rollNo;
public:
    void setRollNo(int roll) {
        rollNo = roll;
    }
    int getRollNumber() {
        return rollNo;
    }
};

class Test : public Student {
protected:
    int marks1, marks2;
public:
    void setMarks(int m1, int m2) {
        marks1 = m1;
        marks2 = m2;
    }
    void displayMarks() {
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
    }
};

class Result : public Test {
private:
    int totalMarks;
public:
    void calculateTotal() {
        totalMarks = marks1 + marks2;
    }
    void displayResult() {
        cout << "Roll Number: " << getRollNumber() << endl;
        displayMarks();
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() {
    Result R;
    R.setRollNo(101);
    R.setMarks(85, 90);
    R.calculateTotal();
    R.displayResult();

    return 0;
}