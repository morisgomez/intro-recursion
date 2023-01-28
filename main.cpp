/*

EXAMPLE 1 OF RECURSION FROM https://youtu.be/MwfvXDfaZeI
#include <iostream>
using namespace std;

//sum numbers between m and n (m has to be less than n)

int recursive_sum (int m, int n)
{
    //base statement which prevents infinite recursion:
    if (m == n)
        return m; //m gets added to other return values when it becomes 4 and function terminates.
    //the actual recursion logic:
    return m + recursive_sum(m + 1, n); //n stays as 4 bc that is the limit: 2 - 4.
    //case 1: m = 4, n = 4
    //base statement = false
    //so we return 2 + (recursive (3, 4) = (recursive (4, 4)));
    //same as 2 + 3 + 4
    //9
}
int main()
{
    //recursion approach:
    int m = 2, n = 4;
    cout << "the sum is " << recursive_sum (m,n);

    //for loop approach:
    int m = 2, n = 4, sum = 0; //sum keeps track of the numbers being added.
    for (int counter = m; counter <= n ; counter++)
    {
        sum = sum + counter;
    }
    cout << sum;

    return 0;
}
*/

/*
///////////////////////////////////////////////////
///////////////////////////////////////////////////
///////////////////////////////////////////////////
///////////////////////////////////////////////////
///////////////////////////////////////////////////
///////////////////////////////////////////////////
///////////////////////////////////////////////////
///////////////////////////////////////////////////
///////////////////////////////////////////////////
  
*/

//EXAMPLE 2 OF RECURSION FROM https://www.w3schools.com/cpp/cpp_functions_recursion.asp

#include <iostream>
using namespace std;

int sum (int n)
{
    //base statement:
    if (n == 0)
    {
        return 0; //0 added at end of return values.
    }
    else
    {
        return n + sum(n - 1);
        //function gets called 4 times and 3 of those times are recursion calls.
        //the first one is from main function.
        //3 + sum(2) + sum(1) + sum (0)
        //3 + 2 + sum(1) + sum(0)
        //3 + 2 + 1 + sum (0)
        //3 + 2 + 1 + 0 = 6
        //function runs 4 times:
        //1: n = 3
        //       +
        //2: n = 2
        //       +
        //3: n = 1
        //       +
        //4: n = 0
        //      ____
        //       6
    }
}

int main ()
{
    cout << "final sum is: " << sum(3);
    return 0;
}
