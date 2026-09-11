#include <stdio.h>

int main()
{
    int a, b;
    int sum, diff, product, quotient;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    diff = a - b;
    product = a * b;

    if (b != 0)
    {
        quotient = a / b;

        printf("Sum=%d, Diff=%d, Product=%d, Quotient=%d",
               sum, diff, product, quotient);
    }
    else
    {
        printf("Sum=%d, Diff=%d, Product=%d, Quotient=Division by zero not possible",
               sum, diff, product);
    }

    return 0;
}