#include <stdio.h>
void solve(int *arr, int l, int h, int* min, int* max)
{
    if (l == h)
    {
        if (*max < arr[l])
        {
            *max = arr[l];
        }
        if (*min > arr[h])
        {
            *min = arr[h];
        }
        return;
    }
    if (h - l == 1)
    {
        if (arr[l] < arr[h])
        {
            if (*min > arr[l])
            {
                *min = arr[l];
            }
            if (*max < arr[h])
            {
                *max = arr[h];
            }
        }
        else
        {
            if (*min > arr[h])
            {
                *min = arr[h];
            }
            if (*max < arr[l])
            {
                *max = arr[l];
            }
        }
        return;
    }
    int mid = (l + h) / 2;
    solve(arr, l, mid, min, max);
    solve(arr, mid + 1, h,min, max);
}
int main()
{
    int n;
    printf("\t Enter the Range of Array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf(" Enter a[%d] Element : ",i);
        scanf("%d", &arr[i]);
    }
    int max = 0;
    int min = 100000;
    solve(arr, 0, n - 1, &min, &max);
    printf("\n\t Minimum Number : %d", min);
    printf("\n\t Maximum Number : %d", max);
    return 0;
}