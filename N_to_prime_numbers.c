#include <stdio.h>

int main() {
    int num, i, j, is_prime;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 2; i <= num; i++) {
        is_prime = 1;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}
