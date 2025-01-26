#include <iostream>
#include <conio.h>
using namespace std;

template <typename T>
T calculateSum(T arr[], int size) {
    T sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

void main() {
    int arr1[] = {1, 2, 3, 4, 5};
    float arr2[] = {1.1, 2.2, 3.3, 4.4};

    cout << "Sum of int array: " << calculateSum(arr1, 5) << endl;
    cout << "Sum of float array: " << calculateSum(arr2, 4) << endl;

    getch();
}
