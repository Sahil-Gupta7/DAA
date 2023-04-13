#include <stdio.h>

void bubbleSort(int array[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArrayAsc(int array[], int size)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        printf("\n Element %d : %d ", i + 1, array[i]);
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size)
{
    int i, j, max_idx;
    for (i = 0; i < size - 1; i++)
    {
        max_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] > array[max_idx])
                max_idx = j;
        }
        swap(&array[max_idx], &array[i]);
    }
}

void printArrayDesc(int array[], int size)
{
    int i;
    for (i = 0; i < size; ++i)
    {
        printf("\n Element %d : %d ", i + 1, array[i]);
    }
    printf("\n");
}

int main()
{
    int n, i, x;
    int a[10000];
    printf(" Enter the RANGE for RANDOM NUMBERS : ");
    scanf("%d", &n);
    printf("\n -----------------------MENU-----------------------");
    printf("\n 1 -> For ASCENDING ORDER using BUBBLE SORT");
    printf("\n 2 -> For DESCENDING ORDER using SELECTION SORT");
    printf("\n 3 -> For RANDOM ORDER");
    printf("\n -----------------------------------------------");
    printf("\n\n\t Enter your CHOICE : ");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        for (i = 0; i < n; i++)
        {
            a[i] = rand();
        }
        bubbleSort(a, n);
        printf("\n\t RANDOM NUMBERS SORTED IN ASCENDING ORDER USING BUBBLE SORT : \n");
        printArrayAsc(a, n);
        break;
    case 2:
        for (i = 0; i < n; i++)
        {
            a[i] = rand();
        }
        selectionSort(a, n);
        printf("\n\t RANDOM NUMBERS SORTED IN DESCENDING ORDER USING SELECTION SORT : \n");
        printArrayDesc(a, n);
        break;
    case 3:
        printf("\n\t NUMBERS IN RANDOM ORDER \n");
        for (i = 0; i < n; i++)
        {
            a[i] = rand();
        }
        for (i = 0; i < n; i++)
        {
            printf(" Element %d : %d\n", i + 1, a[i]);
        }
        break;
    default:
        printf(" SORRY!!! WRONG ENTRY...");
    }
    return 0;
}