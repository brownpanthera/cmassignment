#include <stdio.h>

int main()
{
    printf("\n");
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int c;

    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
    printf("Amit IT 3 11776803122\n");
}