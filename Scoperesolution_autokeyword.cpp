// Wap to demonstrate the use of scope resolution operator and auto keyword.
#include <iostream>
using namespace std;

auto num = 10;
class Test {
    public:
    void greetHello();
    void greetHi();
    void greetHalo();
};
void Test::greetHello() {
    cout << "Hello!" << endl;
}   
void Test::greetHi() {
    cout << "Hi!" << endl;
}
void Test::greetHalo() {
    cout << "Halo!" << endl;
}
int main() {
    Test t;
    int num;
    cin>>num;
    if(::num > num)
       t.greetHello();
    else if(::num == num)
        t.greetHi();
    else 
        t.greetHalo();
    return 0;
}