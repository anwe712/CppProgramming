//typecasting in cpp

#include <iostream>
using namespace std;

int main() {
    // Implicit typecasting (Widening Conversion)
    int num_int = 100;
    double num_double = num_int; // Implicit conversion from int to double
    cout << "Implicit typecasting (Widening Conversion): " << num_double << endl;

    // Explicit typecasting (Narrowing Conversion)
    double num_double2 = 123.45;
    int num_int2 = static_cast<int>(num_double2); // Explicit conversion from double to int
    cout << "Explicit typecasting (Narrowing Conversion): " << num_int2 << endl;

    // C-style casting
    double num_double3 = 45.67;
    int num_int3 = (int)num_double3; // C-style casting from double to int
    cout << "C-style casting: " << num_int3 << endl;

    // Function-style casting
    double num_double4 = 78.9;
    int num_int4 = int(num_double4); // Function-style casting from double to int
    cout << "Function-style casting: " << num_int4 << endl;

    // Dynamic casting (for polymorphic classes, requires at least one virtual function)
    class Base {
    public:
        virtual void print() {
            cout << "This is Base class" << endl;
        }
    };
    class Derived : public Base {
    public:
        void print() override {
            cout << "This is Derived class" << endl;
        }
    };

    Base* base_ptr = new Derived();
    Derived* derived_ptr = dynamic_cast<Derived*>(base_ptr); // Dynamic casting from Base* to Derived*
    if (derived_ptr) {
        derived_ptr->print();
    } else {
        cout << "Dynamic cast failed" << endl;
    }

    delete base_ptr;

    return 0;
}
