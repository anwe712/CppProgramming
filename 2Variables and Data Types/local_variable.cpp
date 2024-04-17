#include <iostream>
using namespace std ;
//local variable is declared within a function and can be called using the function

void myFunction() {
    int localVar = 10; // Local variable
   cout << "Local variable: " << localVar << endl;
}

int main() {
    myFunction();
    // Accessing localVar here would result in a compilation error
    return 0;
}
