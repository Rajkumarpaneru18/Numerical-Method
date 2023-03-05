/*Program Code for Linear Curve Fitting*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "Enter the no of data points: " << endl;
    cin >> n;

    float x[10], y[10];
    float a, b;

    float sumx = 0, sumxx = 0, sumxy = 0, sumy = 0;

    // Input data
    cout << "Enter the values x and y: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }

    cout << "Showing the input data: " << endl;
    cout << "x" << setw(10) << "y" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << setw(10) << y[i] << endl;
    }

    for (int i = 0; i < n; i++)
    {
        sumx = sumx + x[i];
        sumxx = sumxx + x[i] * x[i];
        sumxy = sumxy + x[i] * y[i];
        sumy = sumy + y[i];
    }
    // calculating value of a and b
    b = (n * sumxy - sumx * sumy) / (n * sumxx - sumx * sumx);
    a = (sumy - b * sumx) / n;
    cout << "Printing the values of the a and b: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;

    return 0;
}