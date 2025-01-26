#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt"); // Open the file for reading
    if (!file) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string line;
    cout << "Contents of the file:\n";
    while (getline(file, line)) { // Read line by line
        cout << line << endl;
    }

    file.close(); // Close the file
    return 0;
}
