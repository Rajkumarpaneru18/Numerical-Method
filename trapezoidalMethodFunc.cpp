/*Trapezoidal method to solve the  numerical integration problem of given function */

#include <iostream>
using namespace std;

// given function
float function(float x)
{
    return (1 / (1 + x * x));
}

int main()
{
    float a, b, x, y;
    // no of interval
    int n;
    cout << "Enter the number of the interval: " << endl;
    cin >> n;
    cout << "Enter the lower limit and upper limit: " << endl;
    cin >> a >> b;
    float sum = 0;
    // sum of first and last
    sum = function(a) + function(b);
    x = a;
    float h;

    // calculating value of h
    h = (b - a) / n;

    for (int i = 1; i < n; i++)
    {
        x = x + h;
        y += 2 * function(x);
    }

    // adding total sum
    sum = h / 2 * (sum + y);

    // printing the value
    cout << "The final value of the integration is: " << sum << endl;
    return 0;
}