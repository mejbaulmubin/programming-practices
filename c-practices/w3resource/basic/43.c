#include <stdio.h>

int main()
{
    int x, y = 3;
    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
int result = 0;
    for (int i = 1; i <= x; i++)
    {
        
        for (int j = 1; j <= y; j++)
        {
            result ++;
            printf("%d ", result);
            
        }

        printf("\n");
    }
}