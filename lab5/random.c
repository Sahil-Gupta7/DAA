#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

void printArray(int A[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", A[i]);
	printf("\n");
}

int main()
{
    srand(0);
    double timeexe1,timeexe2,timeexe3,timeexe4;
    clock_t start, end;
    int arr1[500],arr2[1000],arr3[5000],arr4[10000];
    int i,arr1_size,arr2_size,arr3_size,arr4_size;
    arr1_size=500;
    arr2_size=1000;
    arr3_size=5000;
    arr4_size=10000;
    for(i=0;i<500;i++)
        arr1[i]=rand();
    
    for(i=0;i<1000;i++)
        arr2[i]=rand();

    for(i=0;i<5000;i++)
        arr3[i]=rand();

    for(i=0;i<10000;i++)
        arr4[i]=rand();

    printf("\n\t When Inputs were taken Randomly...\n");
    start = clock();
	mergeSort(arr1, 0, arr1_size - 1);
    printf("\n\t Sorted array of 500\tElements \n");
	printArray(arr1, arr1_size);
    printf("\n");
    end = clock();
    timeexe1 = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    mergeSort(arr2, 0, arr2_size - 1);
    printf("\n\t Sorted array of 1000\tElements \n");
	printArray(arr2, arr2_size);
    printf("\n");
    end = clock();
    timeexe2 = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    mergeSort(arr3, 0, arr3_size - 1);
    printf("\n\t Sorted array of 5000\tElements \n");
	printArray(arr3, arr3_size);
    printf("\n");
    end = clock();
    timeexe3 = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    mergeSort(arr4, 0, arr4_size - 1);
    printf("\n\t Sorted array of 10000\tElements\n");
	printArray(arr4, arr4_size);
    printf("\n");
    end = clock();
    timeexe4 = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\n\t Time Taken for 500\tElements : %f", timeexe1);
    printf("\n\t Time Taken for 1000\tElements : %f", timeexe2);
    printf("\n\t Time Taken for 5000\tElements : %f", timeexe3);
    printf("\n\t Time Taken for 10000\tElements : %f", timeexe4);

    for(i=0;i<arr1_size;i++)
        arr1[i]=i+1;

    for(i=0;i<arr2_size;i++)
        arr2[i]=i+2;

    for(i=0;i<arr3_size;i++)
        arr3[i]=i+3;

    for(i=0;i<arr4_size;i++)
        arr4[i]=i+4;

    printf("\n\n\t When Inputs were taken in Ascending Order...\n");
    start = clock();
	mergeSort(arr1, 0, arr1_size - 1);
    printf("\n\t Sorted array of 500\tElements \n");
	printArray(arr1, arr1_size);
    printf("\n");
    end = clock();
    timeexe1 = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    mergeSort(arr2, 0, arr2_size - 1);
    printf("\n\t Sorted array of 1000\tElements \n");
	printArray(arr2, arr2_size);
    printf("\n");
    end = clock();
    timeexe2 = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    mergeSort(arr3, 0, arr3_size - 1);
    printf("\n\t Sorted array of 5000\tElements \n");
	printArray(arr3, arr3_size);
    printf("\n");
    end = clock();
    timeexe3 = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    mergeSort(arr4, 0, arr4_size - 1);
    printf("\n\t Sorted array of 10000\tElements\n");
	printArray(arr4, arr4_size);
    printf("\n");
    end = clock();
    timeexe4 = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\n\t Time Taken for 500\tElements : %f", timeexe1);
    printf("\n\t Time Taken for 1000\tElements : %f", timeexe2);
    printf("\n\t Time Taken for 5000\tElements : %f", timeexe3);
    printf("\n\t Time Taken for 10000\tElements : %f", timeexe4);

    for(i=arr1_size;i>1;i--)
        arr1[i]=i-1;

    for(i=arr2_size;i>1;i--)
        arr2[i]=i-1;

    for(i=arr3_size;i>1;i--)
        arr3[i]=i-1;

    for(i=arr4_size;i>1;i--)
        arr4[i]=i-1;

    printf("\n\n\t When Inputs were taken in Descending Order...\n");
    start = clock();
	mergeSort(arr1, 0, arr1_size - 1);
    printf("\n\t Sorted array of 500\tElements \n");
	printArray(arr1, arr1_size);
    printf("\n");
    end = clock();
    timeexe1 = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    mergeSort(arr2, 0, arr2_size - 1);
    printf("\n\t Sorted array of 1000\tElements \n");
	printArray(arr2, arr2_size);
    printf("\n");
    end = clock();
    timeexe2 = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    mergeSort(arr3, 0, arr3_size - 1);
    printf("\n\t Sorted array of 5000\tElements \n");
	printArray(arr3, arr3_size);
    printf("\n");
    end = clock();
    timeexe3 = ((double)(end - start)) / CLOCKS_PER_SEC;

    start = clock();
    mergeSort(arr4, 0, arr4_size - 1);
    printf("\n\t Sorted array of 10000\tElements\n");
	printArray(arr4, arr4_size);
    printf("\n");
    end = clock();
    timeexe4 = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("\n\t Time Taken for 500\tElements : %f", timeexe1);
    printf("\n\t Time Taken for 1000\tElements : %f", timeexe2);
    printf("\n\t Time Taken for 5000\tElements : %f", timeexe3);
    printf("\n\t Time Taken for 10000\tElements : %f", timeexe4);

	return 0;
}