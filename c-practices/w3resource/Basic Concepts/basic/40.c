
#include <stdio.h>

int main()
{
    int x, y;
    printf("Input the first integer: ");
    scanf("%d", &x);
    printf("Input the second integer: ");
    scanf("%d", &y);

    for (int i = x / 7; i <= y / 7; i++)
    {
        if (((i * 7 + 3) >= 25) && ((i * 7 + 3) <= 45))
        {
            printf("%d\n", i * 7 + 2);
            printf("%d\n", i * 7 + 3);
        }
    }
}
