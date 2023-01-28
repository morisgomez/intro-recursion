#include <iostream>
using namespace std;
/*
The factorial function (symbol: !) says to multiply all whole numbers from our chosen number down to 1.

Examples:

4! = 4 × 3 × 2 × 1 = 24
7! = 7 × 6 × 5 × 4 × 3 × 2 × 1 = 5040
1! = 1
*/
//we need to subtract down from f until we hit 1. we want 1 to be multiplied too.
int factorial (int f)
{
    if (f < 2)
    {
        return 1;
    }
    else
    {
        return f * factorial(f - 1);
    }
}
//f = 4: return 4 * 3 * 2 * 1
//f = 3: return 3 *
//f = 2: return 2 *
//f = 1: return 1

int main ()
{
    cout << factorial (4);
    return 0;
}
