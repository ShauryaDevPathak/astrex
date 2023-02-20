#include <bits/stdc++.h>
using namespace std;

void matrix_chain_mul(int arr[], int n)
{
    int m[n][n] = {0};
    int s[n][n] = {0};
    int j, min, q;
    for (int d = 1; d < n - 1; d++)
    {
        for (int i = 1; i < n - d; i++)
        {
            j = i + d;
            min = INT_MAX;
            for (int k = i; k <= j - 1; k++)
            {
                q = m[i][k] + m[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
                if (q < min)
                {
                    min = q;
                    s[i][j] = k;
                }
            }
            m[i][j] = min;
        }
    }

    for (int d = 1; d < n; d++)
    {
        for (int i = 1; i < n; i++)
        {
            cout << s[d][i] << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int A[] = {4, 5, 3, 2, 7};
    matrix_chain_mul(A, 5);
    return 0;
}