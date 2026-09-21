// An educational institution wants to maintain the database of his employees. The database is divided into a number of class whose hierarchical relationships are shown in the figure. The figure also shows the minimum information required for each class. Specify all the classes and define functions to create the database and retrieve individual information as when required.
#include <iostream>
using namespace std;

class Staff {
protected:
    int staffId;
    string name;
public:
    void setStaffInfo(int id, string n) {
        staffId = id;
        name = n;
    }
    void displayStaffInfo() {
        cout << "Staff ID: " << staffId << endl;
        cout << "Name: " << name << endl;
    }
};

class Teacher : public Staff {
private:
    string subject;
public:
    void setTeacherInfo(int id, string n, string sub) {
        setStaffInfo(id, n);
        subject = sub;
    }
    void displayTeacherInfo() {
        displayStaffInfo();
        cout << "Subject: " << subject << endl;
    }
};

class Officer : public Staff {
private:
    string department;
public:
    void setOfficerInfo(int id, string n, string dept) {
        setStaffInfo(id, n);
        department = dept;
    }
    void displayOfficerInfo() {
        displayStaffInfo();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Teacher t;
    t.setTeacherInfo(1, "Alice", "Mathematics");
    t.displayTeacherInfo();

    cout << endl;

    Officer o;
    o.setOfficerInfo(2, "Bob", "Administration");
    o.displayOfficerInfo();

    return 0;
}