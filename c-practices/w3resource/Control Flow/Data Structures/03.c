/*
3. Array Sum Calculation

Write a program in C to find the sum of all elements of the array.
Test Data :
Input the number of elements to be stored in the array :3
Input 3 elements in the array :
element - 0 : 2
element - 1 : 5
element - 2 : 8
Expected Output :
Sum of all elements stored in the array is : 15
*/

#include <stdio.h>
#define LEN 10

int main()
{
    int arr[LEN];

    for (int i = 0; i < LEN; i++)
    {
        printf("Enter %d elements of the array : ", i);
        scanf("%d", &arr[i]);
    }
    int sum = arr[0];

    for (int i = 1; i < LEN; i++)
    {
        sum = sum+arr[i];
    }

     printf("The sum of the array = %d", sum);
}
