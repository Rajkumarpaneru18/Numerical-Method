/*Lagrange Interpolation */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

    float x[10], y[10], data, sum = 0;
    int n;
    // no of data
    cout << "Enter the number of the data in the table: " << endl;
    cin >> n;
    // values of x and y in table
    cout << "Enter the no of data:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    // data whose value is to find
    cout << "Enter the data whose value is to be find: " << endl;
    cin >> data;

    // showing the data
    cout << "The input data are: " << endl;
    cout << "x" << setw(5) << "y" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << setw(5) << y[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        float fact = 1;
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                fact = fact * (data - x[j]) / (x[i] - x[j]);
                cout << fact << endl;
            }
        }
        sum = sum + fact * y[i];
    }

    // result
    cout << "The required solution of the equation is: " << endl;
    cout << sum << endl;
    return 0;
}