#include <iostream>
using namespace std;

bool check2(int num)
{
    int d = num % 10;

    if (d % 2 == 0 || d == 0)
    {
        return true;
    }
}

bool check3(int num)
{
    int sum = 0;
    int copy = num;
    while (copy > 0)
    {
        int c = copy % 10;
        sum += c;
        copy /= 10;
    }

    if (sum % 3 == 0)
    {
        return true;
    }
}


bool check4(int num)
{
    int y = num % 10;

    if (y % 4 == 0 )
    {
        return true;
    }
}


bool check5(int num)
{
    int z = num % 10;

    if (z % 5 == 0 || z == 0)
    {
        return true;
    }
}

bool check10(int num)
{
    int p = num % 10;

    if ( p == 0)
    {
        return true;
    }
}

bool check10(int num)
{
    int p = num % 10;

    if ( p == 0)
    {
        return true;
    }
}


