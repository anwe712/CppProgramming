//function returning the sum of two numbers
#include <iostream>

using namespace std;

int sum (int num1 , int num2)
{
    int addition = 0 ;
    addition = num1 + num2 ;
    return addition ;
}

int main()
{
    int a , b , result ;
    
    cout << "Enter the number1 : " ;
    cin >> a ;
    cout << "Enter the number2 : " ;
    cin >> b ;
    
    result = sum (a , b);
    cout << "The sum is " << result ;
    


}