/*
    Chapter:      02.2 - Getting Started/Analyzing Algorithms Ex2.2-2
    Algorithm:    Selection Sort
    Contributor:  [Ahmed Adel / Ahmed-Adel-Ramadan]
    Complexity:   θ(n ^ 2)
    --------------------------------------------------------------------
    Description:
        This is implementation of selection sort algorithm that sorts
        an array consisting of n numbers in non-decreasing order
    --------------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

void selection_sort(int arr[], int length);

int main(void) {
    printf("Enter The Number Of Elements: ");
    int length;
    scanf("%i", &length);

    int *arr = (int *)malloc(length * sizeof(int));
    for (int i = 0; i < length; ++i) {
        printf("Enter Element %i: ", i + 1);
        scanf("%i", arr + i);
    }

    selection_sort(arr, length);

    for (int i = 0; i < length; ++i) {
        printf("%i ", arr[i]);
    }

    free(arr);
}

void selection_sort(int arr[], int length) {
    for (int i = 0; i + 1 < length; ++i) {
        // Find smallest element in arr[i:length]
        int selection_index = i;
        for (int j = i + 1; j < length; ++j) {
            if (arr[j] < arr[selection_index]) {
                selection_index = j;
            }
        }

        // Swap the smalles element with key in index i
        int tmp = arr[i];
        arr[i] = arr[selection_index];
        arr[selection_index] = tmp;
    }
}