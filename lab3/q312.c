#include <stdio.h>

int main()
{
    int n, i, sum = 0, sum1 = 0;
    printf("\t Enter number of Elements : ");
    scanf("%d", &n);
    int a[n];
    if (n < 8)
    {
        printf(" Sorry!!! Please Enter 8 or more numbers...");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf(" Enter a[%d] Elements : ", i);
            scanf("%d", &a[i]);
        }

        for (i = 0; i < n - 1; i++)
        {
            sum += a[i];
            sum1 += a[n - i - 1];
        }

        if (sum1 > sum)
            sum = sum1;

        printf("\n Max Sum of Contiguous Subarray : %d", sum);
    }
}