#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void getdata(int x)
    {
        a = x;
    }
    friend void largest(A, B);
};
class B{
    int b;
    public:
    void getdata(int y)
    {
        b = y;
    }
    friend void largest(A, B);
};
void largest(A obj1, B obj2)
{
    if(obj1.a > obj2.b)
        cout<<"Largest data member is: "<<obj1.a;
    else
        cout<<"Largest data member is: "<<obj2.b;
}
int main()
{
    A a1;
    B b1;
    int x, y;
    cout<<"Enter the value of a and b: ";
    cin>>x>>y;
    a1.getdata(x);
    b1.getdata(y);
    largest(a1, b1);
    return 0;
}