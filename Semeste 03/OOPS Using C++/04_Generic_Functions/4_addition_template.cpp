#include <iostream>
#include <conio.h>
using namespace std;

template <typename T>
bool searchElement(T arr[], int size, T key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

void main() {
    int arr1[] = {1, 2, 3, 4, 5};
    float arr2[] = {1.1, 2.2, 3.3, 4.4};

    int key1 = 3;
    float key2 = 2.2;

    cout << "Key " << key1 << " in int array: " << (searchElement(arr1, 5, key1) ? "Found" : "Not Found") << endl;
    cout << "Key " << key2 << " in float array: " << (searchElement(arr2, 4, key2) ? "Found" : "Not Found") << endl;

    getch();
}
