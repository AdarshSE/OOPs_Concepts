#include <iostream>
using namespace std;

class Staff
{
protected:
    int code;
    string name;

public:
    Staff(int c, string n)
    {
        code = c;
        name = n;
    }

    void showStaff()
    {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
    }
};

class Teacher : public Staff
{
    string subject;
    string publication;

public:
    Teacher(int c, string n, string s, string p)
        : Staff(c, n)
    {
        subject = s;
        publication = p;
    }

    void show()
    {
        showStaff();
        cout << "Subject: " << subject << endl;
        cout << "Publication: " << publication << endl;
    }
};

class Typist : public Staff
{
protected:
    int speed;

public:
    Typist(int c, string n, int sp)
        : Staff(c, n)
    {
        speed = sp;
    }

    void showTypist()
    {
        showStaff();
        cout << "Speed: " << speed << " wpm" << endl;
    }
};

class Regular : public Typist
{
public:
    Regular(int c, string n, int sp)
        : Typist(c, n, sp)
    {
    }
};

class Casual : public Typist
{
    int dailyWages;

public:
    Casual(int c, string n, int sp, int w)
        : Typist(c, n, sp)
    {
        dailyWages = w;
    }

    void show()
    {
        showTypist();
        cout << "Daily Wages: " << dailyWages << endl;
    }
};

class Officer : public Staff
{
    char grade;

public:
    Officer(int c, string n, char g)
        : Staff(c, n)
    {
        grade = g;
    }

    void show()
    {
        showStaff();
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    Teacher t(101, "Adarsh", "CSE", "IEEE");

    Regular r(102, "Rahul", 50);

    Casual c(103, "Aman", 45, 800);

    Officer o(104, "Ravi", 'A');

    cout << "----- TEACHER -----" << endl;
    t.show();

    cout << "\n----- REGULAR TYPIST -----" << endl;
    r.showTypist();

    cout << "\n----- CASUAL TYPIST -----" << endl;
    c.show();

    cout << "\n----- OFFICER -----" << endl;
    o.show();

    return 0;
}