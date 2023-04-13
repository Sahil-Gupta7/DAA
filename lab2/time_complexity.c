#include <stdio.h>
#include <time.h>

int binarySearch(int array[], int x, int low, int high)
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main()
{
    double timeexe;
    int n, i, z, c1 = 0, c2 = 0;
    clock_t start, end;
    start = clock();
    printf("\n\t Enter the RANGE : ");
    scanf("%d", &n);
    int arr1[n];
    printf(" \n\t\t LINEAR SEARCH\n");
    for (i = 0; i < n; i++)
    {
        printf(" Enter the Element a[%d] : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\n Enter the Element to be searched : ");
    scanf("%d", &z);
    for (i = 0; i < n; i++)
    {
        if (arr1[i] == z)
        {
            c1 = c1 + 1;
            c2 = i;
            break;
        }
    }
    if (c1 == 0)
    {
        printf("\n Element Not Found ");
    }
    else
    {
        printf("\n Element Found at Index %d", c2);
    }
    end = clock();
    timeexe = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\n\t Time Taken : %f", timeexe);
    double timeexe1;
    printf("\n\n\n\t BINARY SEARCH ");
    start = clock();
    int result = binarySearch(arr1, z, 0, n - 1);
    if (result == -1)
        printf("\n Element Not Found ");
    else
        printf("\n Element Found at Index %d ", result);
    end = clock();
    timeexe1 = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\n\t Time Taken : %f", timeexe1);
    return 0;
}