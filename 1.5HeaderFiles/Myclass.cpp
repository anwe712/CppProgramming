#include "Myclass.h" //user defined header file
#include <iostream>
using namespace std ;

void Myclass::printMessage()
{
    cout << "Hello from MyClass!" << endl;
}


int main() {
    Myclass obj;
    obj.printMessage();
    return 0;
}

