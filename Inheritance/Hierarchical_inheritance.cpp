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

class Typist : public Staff {
private:
    int speed;
public:
    void setTypistInfo(int id, string n, int spd) {
        setStaffInfo(id, n);
        speed = spd;
    }
    void displayTypistInfo() {
        displayStaffInfo();
        cout << "Speed: " << speed << " WPM" << endl;
    }
};

class Regular : public Staff {
private:
    int salary;
public:
    void setRegularInfo(int id, string n, int sal) {
        setStaffInfo(id, n);
        salary = sal;
    }
    void displayRegularInfo() {
        displayStaffInfo();
        cout << "Salary: " << salary << endl;
    }
};

class Casual : public Staff {
private:
    int dailyWages;
public:
    void setCasualInfo(int id, string n, int wages) {
        setStaffInfo(id, n);
        dailyWages = wages;
    }
    void displayCasualInfo() {
        displayStaffInfo();
        cout << "Daily Wages: " << dailyWages << endl;
    }
};

int main() {
    Teacher t;
    t.setTeacherInfo(1, "Alice", "Mathematics");
    t.displayTeacherInfo();

    Officer o;
    o.setOfficerInfo(2, "Bob", "Administration");
    o.displayOfficerInfo();

    Typist ty;
    ty.setTypistInfo(3, "Charlie", 75);
    ty.displayTypistInfo();

    Regular r;
    r.setRegularInfo(4, "David", 50000);
    r.displayRegularInfo();

    Casual c;
    c.setCasualInfo(5, "Eve", 200);
    c.displayCasualInfo();

    return 0;
}

