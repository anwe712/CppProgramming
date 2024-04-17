#include <iostream>
using namespace std ;

int main(){
    int num1 , num2 ;
    cout << "Enter the two numbers :" << endl ;
    cin >> num1 ;
    cin >> num2 ;

    int add , sub , multiply , div ;
    add = num1 + num2 ;
    sub = num1 - num2 ;
    multiply = num1 * num2 ;
    div = num1 / num2 ;

    cout << "The result of arithmetic operations are :" << "adding :" << add << " , substracting : " << sub << "on multiplying :" << multiply << "and dividing ," << div ;

    return 0 ;

}