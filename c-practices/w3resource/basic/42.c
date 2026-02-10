#include <stdio.h>
#include <math.h>

int main()
{
    int x, y = 3;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    for (int i = 1; i <= x; i++)
    {
        int result = 1;
        for (int j = 1; j <= y; j++)
        {
            // result = pow(i, t);
            result *= i;
            printf("%d ", result);
        }
         printf("\n");
    }

   
}
