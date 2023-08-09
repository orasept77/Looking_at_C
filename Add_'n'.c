#include<stdio.h>
#include<conio.h>

int getInputCount() {
    int n;
    printf("Enter total numbers you want to add: ");
    scanf("%d", &n);
    return n;
}

void getNumbers(int n, int array[]) {
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &array[i]);
    }
}

int calculateSum(int n, int array[]) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum = sum + array[i];
    }
    return sum;
}

void main() {
    int n, sum;
    clrscr();

    n = getInputCount();
    int array[100];
    getNumbers(n, array);
    sum = calculateSum(n, array);

    printf("Sum: %d\n", sum);
    getch();
}
