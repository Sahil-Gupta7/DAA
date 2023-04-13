#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("\t Enter number of Elements : ");
    scanf("%d", &n);
    int a[n];
    int i, c;
    if (n < 8)
    {
        printf(" Sorry!!! Please Enter 8 or more numbers...");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf(" Enter a[%d] Element : ", i);
            scanf("%d", &a[i]);
        }

        printf("\t Total number of Subsets : %.1f\n", (pow((double)2, (double)n)));
        printf("\t Total number of Proper Subsets : %.1f\n", (pow((double)2, (double)n)) - 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                for (int k = i; k <= j; k++)
                {
                    printf("%d ", a[k]);
                }
                printf("\n");
            }
        }
    }
}