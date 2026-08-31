// Given an integer array , a starting index (start) and an ending index (end), write a program to print only the elements in that specific subrange using pointer.
#include <iostream>
using namespace std;
int main() {
    int n, start, end;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    cin>>start>>end;
    int *ptr = arr; 
    for(int i=start; i<=end; i++)
      cout<<*(ptr+i)<<" ";
     return 0;
}