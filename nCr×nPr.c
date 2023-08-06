#include <stdio.h>

long long calculateFactorial(int num);

long long calculateNCR(int n, int r);

long long calculateNPR(int n, int r);

int main()
{
    int n, r;
    long long ncr, npr;

    printf("Enter the value of n and r: ");
    scanf("%d %d", &n, &r);

    ncr = calculateNCR(n, r);
    npr = calculateNPR(n, r);

    printf("%dC%d = %lld\n", n, r, ncr);
    printf("%dP%d = %lld\n", n, r, npr);

    return 0;
}

long long calculateNCR(int n, int r)
{
    return calculateFactorial(n) / (calculateFactorial(r) * calculateFactorial(n - r));
}

long long calculateNPR(int n, int r)
{
    return calculateFactorial(n) / calculateFactorial(n - r);
}

long long calculateFactorial(int num)
{
    long long result = 1;

    for (int i = 1; i <= num; i++)
        result *= i;

    return result;
}
