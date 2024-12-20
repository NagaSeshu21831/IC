#include <stdio.h>

int countNotEqualToKey(int arr[], int size, int key) {
    int count = 0; 
    int i; 
    for (i = 0; i < size; i++) { 
        if (arr[i] != key) {
            count++; 
        }
    }
    return count; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 2, 6}; 
    int size = sizeof(arr) / sizeof(arr[0]); 
    int key = 2; 

    printf("Array elements: ");
    int i; 
    for (i = 0; i < size; i++) 
	{ 
        printf("%d ", arr[i]);
    }
    printf("\nKey: %d\n", key);

    int result = countNotEqualToKey(arr, size, key); 
    printf("Number of values not equal to %d: %d\n", key, result); 

    return 0; 
}
