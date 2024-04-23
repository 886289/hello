#include <iostream>

using namespace std;

void printHello(string name);

int main(int argc, char* argv[]) {
    cout << "Hello, world!" << endl;
    cout << "Hello, world! Again." << endl;
    cout << "Goodbye world!" << endl;
    printHello(argv[1]);
    return 0;
}

void printHello(string name) {
    cout << "Hello, " << name << "." << endl;
}
