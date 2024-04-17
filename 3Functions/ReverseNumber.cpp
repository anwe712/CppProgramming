#include <iostream>
using namespace std;

int reverse(int num)
{
    int copy = num;
    int d, rev = 0;
    while (copy > 0)
    {
        d = copy % 10;
        rev = rev * 10 + d;
        copy = copy / 10;
    }

    return rev;
}

int main()
{
    int number;
    cout << "Enter a number to be reversed :  " << endl;
    cin >> number;

    cout << "The revered number is ";
    cout << reverse(number);

    return 0;
}