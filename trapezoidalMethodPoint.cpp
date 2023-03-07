/* Trapezoidal method for solving numerical integration problem of given data points*/

#include <iostream>
using namespace std;

int main()
{
    float h, a, b, y, y1, Y[10];
    int n;
    cout << "Enter the no of data points: " << endl;
    cin >> n;
    cout << "Enter the lower and uppert limit: " << endl;
    cin >> a >> b;

    // calculating value of h
    h = (b - a) / 6;
    cout << h << endl;
    // taking value of y and calculating the sum
    cout << "Enter the value of the y: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> Y[i];
        if (i == 1 || i == n)
        {
            y += Y[i];
        }
        else
        {
            y1 += 2 * Y[i];
        }
    }
    y = h / 2 * (y + y1);
    // display the result
    cout << "The solution is: " << y << endl;
    return 0;
}