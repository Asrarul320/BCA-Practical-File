#include <iostream>
#include <fstream>
using namespace std;

int main() {
    try {
        ifstream file("nonexistent.txt"); // Attempt to open a non-existent file
        if (!file) {
            throw "File not found!";
        }

        string content;
        cout << "Reading file content:\n";
        while (getline(file, content)) {
            cout << content << endl;
        }

        file.close();
    } catch (const char *msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
