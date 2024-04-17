#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    int arr[size];

    cout << "Enter the elements one by one" << endl ;

        for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
cout << "The array elements are : " ;
    // for the output purpose
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
