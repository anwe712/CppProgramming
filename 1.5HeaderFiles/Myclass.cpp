#include "Myclass.h" // user-defined header file
#include <iostream>
#include <cmath> // for pow function
using namespace std;

void checkArmstrong(int num)
{
    int originalNum = num, sum = 0, digits = 0;

    // Calculate the number of digits
    while (originalNum != 0) {
        digits++;
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate the sum of the digits raised to the power of 'digits'
    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += pow(digit, digits);
        originalNum /= 10;
    }

    // Check if the number is an Armstrong number
    if (sum == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }
}

int main() {
    Myclass obj;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    obj.checkArmstrong(num);

    return 0;
}