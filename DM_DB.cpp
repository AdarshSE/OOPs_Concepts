#include <iostream>
using namespace std;

class DB;   
class DM
{
    int meter;
    int centimeter;
public:
    DM()
    {
        meter = 0;
        centimeter = 0;
    }
    DM(int m, int cm)
    {
        meter = m;
        centimeter = cm;
    }
    void getData()
    {
        cout << "Enter distance in metres and centimetres: ";
        cin >> meter >> centimeter;
    }
    void display()
    {
        cout << meter << " metres " << centimeter << " centimetres" << endl;
    }
    friend DM operator+(DM, DB);
    friend DB operator+(DB, DM);
};
class DB
{
    int feet;
    int inch;
public:
    DB()
    {
        feet = 0;
        inch = 0;
    }
    DB(int f, int i)
    {
        feet = f;
        inch = i;
    }
    void getData()
    {
        cout << "Enter distance in feet and inches: ";
        cin >> feet >> inch;
    }
    void display()
    {
        cout << feet << " feet " << inch << " inches" << endl;
    }
    friend DM operator+(DM, DB);
    friend DB operator+(DB, DM);
};
DM operator+(DM d1, DB d2)
{
    double totalMeters = d1.meter
                       + d1.centimeter / 100.0
                       + d2.feet * 0.3048
                       + d2.inch * 0.0254;

    int m = (int)totalMeters;
    int cm = (int)((totalMeters - m) * 100);
    
    return DM(m, cm);
}
DB operator+(DB d1, DM d2)
{
    double totalInches = d1.feet * 12
                       + d1.inch
                       + d2.meter * 39.3701
                       + d2.centimeter * 0.393701;

    int f = (int)(totalInches / 12);
    int in = (int)(totalInches - f * 12);

    return DB(f, in);
}
int main()
{
    DM d1;
    DB d2;

    d1.getData();
    d2.getData();

    cout << "\nDM + DB = ";
    DM result1 = d1 + d2;
    result1.display();

    cout << "\nDB + DM = ";
    DB result2 = d2 + d1;
    result2.display();

    return 0;
}