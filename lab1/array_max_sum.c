#include <stdio.h>
int main()
{
    int i, j, n, temp, s = 0;
    printf("\t Enter the RANGE : ");
    scanf("%d", &n);
    int a[n];
    printf("\n");
    for (i = 0; i < n; i++)
    {
        printf(" Enter the ELEMENT : ");
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    s = a[0] + a[1];
    printf("\n LARGEST NUMBER : %d", a[0]);
    printf("\n SECOND LARGEST NUMBER : %d", a[1]);
    printf("\n\t MAXIMUM SUM : %d", s);
    return 0;
}