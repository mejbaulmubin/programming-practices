#include <stdio.h>

int main()
{
    int x[5];
    printf("Enter the five number\t: ");
    scanf("%d %d %d %d %d", &x[0], &x[1], &x[2], &x[3], &x[4]);
    int p = 0, n = 0;
    for (int i = 0; i < 5; i++)
    {

        if (x[i] > 0)
        {
            p++;
        }
        else if (x[i] < 0)
        {
            n++;
        }
    }
    printf("Number of positive numbers %d\n", p);
    printf("Number of positive numbers %d\n", n);
}