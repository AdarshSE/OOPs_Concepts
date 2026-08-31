// wap to count the no of objects created using static data member also demonstrate the use of static member functions in this program.
#include <iostream>
using namespace std;
class Count
{
    static int count;
    public:
    Count()
    {
        count++;
    }
    static void displayCount()
    {
        cout << "Number of objects created: " << count << endl;
    }
};

int Count::count = 0;

int main()
{
    Count c1;
    Count c2;
    Count c3;
    Count :: displayCount();
    Count c4;
    Count c5;
    Count :: displayCount();
    return 0;
}