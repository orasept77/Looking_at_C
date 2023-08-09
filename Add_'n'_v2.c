#include<stdio.h>
#include<conio.h>

void main()
{
    int n, sum = 0, i, array[100];
    clrscr();
    printf("Enter total numbers you want to add : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) // Изменили условие i = 1 на i = 0
    {
        printf("Enter number %d : ", i + 1); // Изменили i на i + 1
        scanf("%d", &array[i]);
        sum = sum + array[i];
    }
    printf("Sum : %d\n", sum);
    getch();
}
