/*Program to solve the non linear equation using Newton's Rapshon*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float function(float x)
{
    return (x * x * x + x * x + x + 7);
}

float deriOfFunc(float x)
{
    return (3 * x * x + 2 * x + 1);
}

int main()
{
    float x, e, x1;
    // initial values
    cout << "Enter the values of the x: " << endl;
    cin >> x;
    // taking error
    cout << "Enter the values of the error: " << endl;
    cin >> e;

    int count = 0;
    cout << "S.N" << setw(5);
    cout << "x" << setw(30);
    cout << "function(x)" << setw(27);
    cout << "deriOfFunc(x)" << endl;
    cout << endl;
    do
    {
        // updating the roots
        x1 = x - (function(x) / deriOfFunc(x));
        x = x1;
        // printing all the data in the tabular form
        cout << count << setw(10) << x << setw(25) << function(x) << setw(25) << deriOfFunc(x) << endl;
        count++;
        // if loops goes infinitely
        if (count >= 100)
        {
            break;
        }
    } while (e < fabs(function(x)));

    // printing the root of the equation
    cout << "The approximated solution of the equation is: " << x << endl;
    return 0;
}