//wap to merge two arrays into a third array
#include <iostream>
using namespace std;
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int arr1[5] = {6, 7, 8, 9, 10};
    int arr2[10];
    for(int i = 0; i < 5; i++) {
        arr2[i] = arr[i];
    }
    for(int i = 0; i < 5; i++) {
        arr2[i + 5] = arr1[i];
    }
    for(int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}
