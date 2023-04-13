#include <stdio.h>
int main()
{
    int n, n1, r, c, a[100][100], b[100][100], z[100][100], sum[100][100], i, j;
    printf(" Enter Number of Matrixes : ");
    scanf("%d", &n);
    printf("Enter number of rows : ");
    scanf("%d", &r);
    printf("Enter number of columns : ");
    scanf("%d", &c);

    printf("\n\t Enter Elements in Matrix-1 :\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf(" Enter Element : ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\t Enter Elements in Matrix-2 :\n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf(" Enter Element : ");
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    n1 = n - 2;
    int d = 3;
    while (n1 > 0)
    {
        printf("\n\t Enter Elements in Matrix-%d :\n", d);
        /* Taking input from the user. */
        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                printf(" Enter Element : ");
                scanf("%d", &z[i][j]);
            }
        }
        for (i = 0; i < r; ++i)
        {
            for (j = 0; j < c; ++j)
            {
                sum[i][j] = sum[i][j] + z[i][j];
            }
        }
        n1 = n1 - 1;
        d = d + 1;
    }
    printf("\n\n\tSum of Matrices : \n");
    for (i = 0; i < r; ++i)
    {
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
    }
    return 0;
}