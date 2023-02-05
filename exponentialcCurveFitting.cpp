/*program for exponential curve  fitting*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double sumx = 0, sumy = 0, sumxx = 0, sumxy = 0;

    int n;
    cout << "Enter the number of data: ";
    cin >> n;
    double x, y;
    cout << "Enter the data for (x,y): " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "(x" << i << ",y" << i << ") :";
        cin >> x >> y;
        sumx += x;
        sumxx += x * x;
        sumy += log(y);
        sumxy += x * log(y);
    }
    double d = n * sumxx - sumx * sumx;
    double d1 = sumy * sumxx - sumx * sumxy;
    double d2 = sumxy * n - sumy * sumx;
    double a = d1 / d;
    double b = d2 / d;

    cout << "a= " << exp(a) << endl;
    cout << "b= " << b << endl;
    return 0;
}