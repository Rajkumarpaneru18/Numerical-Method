/*program to find the solution fo the second order differential equation
 */

#include <iostream>
#include <cmath>
using namespace std;

float function(float x, float y)
{
    return x + y;
}

int main()
{
    float xo, yo, h, xn, k;

    cout << "Enter the intial value of xo and yo: " << endl;
    cin >> xo >> yo;

    cout << "Enter the value of the h: " << endl;
    cin >> h;

    cout << "Enter the value fo the xn: " << endl;
    cin >> xn;

    cout << "x\t\t\t\t\t"<< "y\t\t\t\t\t" << endl;
    while (xn != xo)
    {
        k = h * function(xo, yo);
        yo = yo + k;
        xo = xo + h;
        cout << xo << "\t\t\t\t\t" << yo << "\t\t\t\t\t" << endl;
    };
    return 0;
}