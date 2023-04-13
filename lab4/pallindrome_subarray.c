#include <stdio.h>
#include <math.h>
int main()
{
    int n, max = 0;
    printf("\t Enter Number of Elements : ");
    scanf("%d", &n);
    int a[n];
    int maxLength = 1;
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        printf(" Enter a[%d] Element : ", i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int flag = 1;
            for (int k = 0; k < (j - i + 1) / 2; k++)
            {
                if (a[i + k] != a[j - k])
                    flag = 0;
            }
            if (flag && (j - i + 1) > maxLength)
            {
                start = i;
                maxLength = j - i + 1;
            }
        }
    }
    int l = start;
    int h = start + maxLength - 1;
    printf("\n\t Pallindrome Subarray : ");
    for (int i = l; i <= h; i++)
        printf("%d ", a[i]);
}