#include <iostream>
using namespace std;

class Num{
public:
    int a, b;
    Num(int x, int y): a(x), b(y) {}

    int sum(){
        return a+b;
    }

    
};
int main() {
    Num s1(5, 10);
    int Num::*p = &Num::a;
    int Num::*q = &Num::b;
    
    cout << s1.sum() << endl;
    return 0;
}
//sum using pointer to member and object 
//OR
// #include <iostream>
// using namespace std;

// class Sum {
// public:
//     int a, b;
// };

// int main() {
//     Sum obj;
//     Sum *ptr = &obj;

//     int Sum::*p1 = &Sum::a;
//     int Sum::*p2 = &Sum::b;

//     cout << "Enter two numbers: ";
//     cin >> ptr->*p1 >> ptr->*p2;

//     cout << "Sum = " << (ptr->*p1 + ptr->*p2);

//     return 0;
// }
