//wap to merge two arrays into a third array
#include <iostream>
using namespace std;
int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arr1[4] = {7, 8, 9, 10};
    int arr2[10];
    for(int i = 0; i < 6; i++) {
        arr2[i] = arr[i];
    }
    for(int i = 0; i < 4; i++) {
        arr2[i + 6] = arr1[i];
    }
    for(int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}
