/*program to solve the non linear equation using secant method
 */

#include <iostream>
#include <cmath>
using namespace std;

// given function
float function(float x)
{
    return (x * x * x - 4);
}
int main()
{
    float xo, x1, x2, e;
    // initial guess
    cout << "Enter the intial guess valuses: " << endl;
    cin >> xo >> x1;

    // error
    cout << "Enter the values of the error: " << endl;
    cin >> e;
    int count = 0;

    do
    {
        // case of both the initial values are same
        if (function(xo) == function(x1))
        {
            cout << "The roots can not find as the values of a and b are same!!!" << endl;
            break;
        }
        // calculating the next approximated root
        x2 = (xo * function(x1) - x1 * function(xo)) / (function(x1) - function(xo));
        xo = x1;
        x1 = x2;
        count++;
        // if loop goes infinitely stoping case
        if (count >= 100)
        {
            break;
        }
    } while (fabs(function(x2)) > e);

    // final approximated  solution of the equation
    cout << "The required root of the equation is: " << x2 << endl;
    return 0;
}