/*Program to find the inverse of the given matrix*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    float A[10][10];
    float temp;
    cout << "Enter the order of the matrix: ";
    cin >> n;

    // Enter square matrixd
    cout << "Enter the element of the matrix: " << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> A[i][j];
        }
    }

    // generating identity matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = n + 1; j <= 2 * n; j++)
        {
            if (j == i + n)
            {
                A[i][j] = 1;
            }
            else
            {
                A[i][j] = 0;
            }
        }
    }
    // printing the augumented matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2 * n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    // diagonalzing
    for (int j = 1; j <= n; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i != j)
            {
                float temp = A[i][j] / A[j][j];
                for (int k = 1; k <= 2 * n; k++)
                {
                    A[i][k] = A[i][k] - temp * A[j][k];
                }
            }
        }
    }

    // making identity matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = n + 1; j <= 2 * n; j++)
        {
            A[i][j] = A[i][j] / A[i][i];
        }
    }
    cout << endl;

    // printing the inverse matrix
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1 + n; j <= 2 * n; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}