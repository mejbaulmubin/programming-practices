#include <stdio.h>

int main()
{
    int x;
    printf("Enter first number: ");
    scanf("%d", &x);

    for (int i = 1; i <= (x / 2); i++)
    {
        if (x % i == 0)
        {
            printf("%d\n", i);
        }
       
    }
     printf("%d\n", x);
}