#include <stdio.h>

int main()
{
    int n, i;
    printf("\t Enter number of Elements : ");
    scanf("%d", &n);
    int a[n];
    int currSum = 0, maxSum = 0;
    for (i = 0; i < n; i++)
    {
        printf(" Enter a[%d] Elements : ", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        currSum = currSum + a[i];
        if (currSum > maxSum)
        {
            maxSum = currSum;
        }
        if (a[i] < 0)
        {
            currSum = 0;
        }
    }
    printf(" Maximum Sum of Contiguous Subarray : %d", maxSum);
    return 0;
}