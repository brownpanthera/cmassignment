#include <stdio.h>
int main()
{
    int n, i;
    float sum = 0, number, average;

    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; ++i)
    {
        scanf("%f", &number);
        sum += number;
    }

    average = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    printf("\n");
       printf("Amit IT 3 11776803122\n");
}
