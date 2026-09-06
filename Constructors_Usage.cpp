#include <bits/stdc++.h>
using namespace std;

class Student
{
    int roll;
    string name;
    char section;
    public:
    Student()
    {
        roll = 10;
        name = "Raj";
        section = 'A';
    }
    Student (int r , string n , char c)
    {
        roll = r;
        name = n;
        section = c;
    }
    Student (Student &s)
    {
        roll = s.roll;
        name = s.name;
        section = s.section;
    }
    void display()
    {
        cout<<roll<<endl;
        cout<<name<<endl;
        cout<<section<<endl;
    }
};

int main() {
	Student s1;
	Student s2(15,"Adarsh",'B');
	Student s3(s2);
	cout<<"Default constructor :- "<<endl;
	s1.display();
	cout<<"Parameterized constructor :- "<<endl;
	s2.display();
	cout<<"Copy constructor :- "<<endl;
	s3.display();
	return 0;
}