#include <iostream>
using namespace std;

// Global variable declared outside any function and can be accessed from anywhere
int num = 10;

void func() {
    // Local variable inside the function with the same name as the global variable
    int num = 89;
    cout << "The local variable inside the function is " << num << endl;
}

int main() {
    cout << "The global variable is " << num << endl;
    func(); // Calling the function
    return 0;
}
