/* program to solve the non linear equation using bisection method*/

#include <iostream>
#include <cmath>
using namespace std;

float function(float x)
{
    return 2 * x - 4 * sin(x);
}
float x;
float e = 0.0005;
void bisection(float x1, float x2)
{
    int count = 0;
    if (function(x1) * function(x2) >= 0)
    {
        cout << "The intial guess are wrong : " << endl;
        exit;
    }
    x = x1;
    while ((x2 - x1) >= e)
    {
        x = (x1 + x2) / 2;

        if (function(x) == 0.0)
        {
            cout << "The root is: " << x << endl;
            break;
        }
        else if (function(x1) * function(x) < 0)
        {
            x2 = x;
        }
        else
        {
            x1 = x;
        }

        if (count > 100)
        {
            cout << "The approximate result is: " << x << endl;
            break;
        }
    }
}

int main()
{
    float x1, x2;
    cout << "Eneter the initial guess values: " << endl;
    cin >> x1 >> x2;
    bisection(x1, x2);

    cout << "the required root is : " << x << endl;
    return 0;
}