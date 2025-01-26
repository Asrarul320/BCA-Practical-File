#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt"); // Create and open a file for writing
    if (!file) {
        cout << "Error creating file!" << endl;
        return 1;
    }

    file << "Hello, this is a file write operation example!" << endl;
    file << "This is the second line in the file." << endl;

    file.close(); // Close the file
    cout << "Data written to file successfully." << endl;

    return 0;
}
