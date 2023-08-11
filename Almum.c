#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define FAILURE 1

void inputArray(int *array, size_t num_elements) {
    printf("Enter elements of the array:\n");
    for (size_t i = 0; i < num_elements; ++i) {
        scanf("%d", &array[i]);
    }
}

void printArray(const int *array, size_t num_elements) {
    printf("Elements are:\n");
    for (size_t i = 0; i < num_elements; ++i) {
        printf("%d\n", array[i]);
    }
}

int main() {
    size_t num_elements;
    printf("Enter the total number of elements: ");
    if (scanf("%zu", &num_elements) != 1 || num_elements == 0) {
        printf("Invalid input.\n");
        return FAILURE;
    }

    int *array = (int *)malloc(num_elements * sizeof(int));

    if (array == NULL) {
        printf("Error! Memory allocation failed.");
        return FAILURE;
    }

    inputArray(array, num_elements);
    printArray(array, num_elements);

    free(array);
    return SUCCESS;
}
