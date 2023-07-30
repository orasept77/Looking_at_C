#-allocate memory using malloc() and free memory using free().

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num_elements, i, *array, sum = 0;
    printf("Enter the total number of elements: ");
    scanf("%d", &num_elements);

    array = (int*)malloc(num_elements * sizeof(int));

    if (array == NULL) {
        printf("Error! Memory allocation failed.");
        return 0;
    }

    printf("Enter elements of the array:\n");
    for (i = 0; i < num_elements; ++i) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    printf("Elements are:\n");
    for (i = 0; i < num_elements; i++) {
        printf("%d\n", array[i]);
    }

    free(array);
    return 0;
}
