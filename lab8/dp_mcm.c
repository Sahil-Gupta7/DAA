#include <stdio.h>

int MatrixChainMultiplication(int arr[], int n)
{
    int minMul[n][n];
    int j, q;
    for (int i = 1; i < n; i++)
        minMul[i][i] = 0;
    for (int L = 2; L < n; L++)
    {
        for (int i = 1; i < n - L + 1; i++)
        {
            j = i + L - 1;
            minMul[i][j] = 99999999;
            for (int k = i; k <= j - 1; k++)
            {
                q = minMul[i][k] + minMul[k + 1][j] + arr[i - 1] * arr[k] * arr[j];
                if (q < minMul[i][j])
                {
                    minMul[i][j] = q;
                }
            }

            printf(" m[%d][%d] : %d\n", i, j, minMul[i][j]);
        }
    }
    return minMul[1][n - 1];
}
int main()
{
    int n;
    printf(" Enter the Size of Array : ");
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        printf(" Enter M[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    printf(" Minimum number of multiplications required for the matrices multiplication is %d ", MatrixChainMultiplication(arr, n));
    return 0;
} 