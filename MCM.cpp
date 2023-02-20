#include <bits/stdc++.h>
using namespace std;

void matrix_chain_mul(int arr[], int n)
{
    int m[n][n] = {0};
    int s[n][n] = {0};
    int j, min, q;

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