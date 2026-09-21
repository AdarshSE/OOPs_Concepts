// Implement a program using static members and friend functions to illustrate shared data and controlled access.
#include <iostream>
using namespace std;

class MyClass {
private:
    int privateData;
    static int sharedData;  

public:
    MyClass(int data) : privateData(data) {}

    friend void displaySharedData();
    friend void updateSharedData(int newData);
};

int MyClass::sharedData = 0;

void displaySharedData() {
    cout << "Shared Data: " << MyClass::sharedData << endl;
}

void updateSharedData(int newData) {
    MyClass::sharedData = newData;
};

int main() {
    MyClass obj1(10);
    MyClass obj2(20);

    displaySharedData(); 

    updateSharedData(100); 
    displaySharedData(); 

    return 0;
}
