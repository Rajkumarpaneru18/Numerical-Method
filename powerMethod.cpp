/*program to use the power method*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    float A[10][10];
    float X[5], Y[5], diff[5], Dmax;
    float Z[5], Zmax;

    cout << "Enter the size of the Matrix: ";
    cin >> n;

    // input matrix
    cout << "Enter the element of the Matrix: " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "A[" << i << "][" << j << "] : ";
            cin >> A[i][j];
        }
        cout << endl;
    }

    // intializing column matrix X
    cout << "Enter the column vector: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> X[i];
    }
    do
    {
        // multiplying A and X
        for (int i = 1; i <= n; i++)
        {
            Z[i] = 0;
            for (int j = 1; j <= n; j++)
            {
                Z[i] += A[i][j] * X[j];
            }
        }
        Zmax = fabs(Z[1]);
        for (int i = 2; i <= n; i++)
        {
            if (fabs(Z[i]) > Zmax)
            {
                Zmax = fabs(Z[i]);
            }
        }
        // dividing each element of Z by Zmax

        for (int i = 1; i <= n; i++)
        {
            Y[i] = Z[i] / Zmax;
        }
        // calculating difference of X and Y
        for (int i = 1; i <= n; i++)
        {
            diff[i] = fabs(Y[i] - X[i]);
        }
        // Finding Dmax
        Dmax = diff[1];
        for (int i = 2; i <= n; i++)
        {
            if (diff[i] > Dmax)
            {
                Dmax = diff[i];
            }
        }
        for (int i = 1; i <= n; i++)
        {
            X[i] = Y[i];
        }
    } while (Dmax > 0.005);
    // printing eigen value
    cout << "The eigen value is: " << Zmax << endl;

    // printing eigen vector
    cout << "The eigen Matrix is: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << " " << Y[i];
    }
    return 0;
}