#include <bits/stdc++.h>
using namespace std;
class Time
{
    public: 
    int hours, minutes;
    void gettime(int a, int b)
    {
        hours = a;
        minutes = b;
    }
    Time sum(Time y)
    {
        Time z;
        z.minutes = y.minutes + minutes;
        z.hours = y.hours + hours;
        return z;
    }
    void display()
    {
        cout<<hours<<"hr"<<" "<<minutes<<"min";
    }
};
int main() {
   Time t1;
   Time t2;
   Time t3;
   t1.gettime(5,30);
   t2.gettime(1,20);
   t3 = t1.sum(t2);
   t3.display();
   return 0;
}