#include <iostream>
using namespace std;

class Array{
    
    int arr[10];
    public:
    void getdata()
    {
        cout<<"Enter 10 elements of array: ";
        for(int i=0; i<10; i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
        cout<<"Elements of array are: ";
        for(int i=0; i<10; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void minmax()
    {
        int min = arr[0];
        int max = arr[0];
        for(int i=1; i<10; i++)
        {
            if(arr[i] < min)
                min = arr[i];
            if(arr[i] > max)
                max = arr[i];
        }
        cout<<"Minimum element is: "<<min<<endl;
        cout<<"Maximum element is: "<<max<<endl;
    }
};
int main()
{
    Array a;
    a.getdata();
    a.display();
    a.minmax();
    return 0;
}