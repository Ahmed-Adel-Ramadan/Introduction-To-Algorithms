/*
    Chapter:      Ex 2.3-5
    Algorithm:    Recursive Insertion Sort
    Contributor:  [Ahmed Adel / Ahmed-Adel-Ramadan]
    Complexity:
        Best Case:     theta(n)
        Worst Case:  theta(n^2)
    --------------------------------------------------------------------
    Description:
        This program implements the Recursive version of Insertion Sort
   algorithm to sort an array of integers. It prompts the user to input the
   number of elements and the elements themselves, then sorts the array using
   Recursive version of Insertion Sort and prints the sorted array.
    --------------------------------------------------------------------
*/
#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int arr[], int length);

int main(void) {
    printf("Enter The Number Of Elements: ");
    int length;
    scanf("%i", &length);

    int *arr = (int *)malloc(length * sizeof(int));
    for (int i = 0; i < length; ++i) {
        printf("Enter Element %i: ", i + 1);
        scanf("%i", arr + i);
    }

    insertion_sort(arr, length);

    for (int i = 0; i < length; ++i) {
        printf("%i ", arr[i]);
    }

    free(arr);
}

void insertion_sort(int arr[], int length) {
    if (length <= 1)
        return;

    insertion_sort(arr, length - 1);

    int key = arr[length - 1];
    int j = length - 2;
    while (j >= 0 && key < arr[j]) {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
}
