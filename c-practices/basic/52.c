#include <stdio.h>
#define AL 5

int main()
{
    int arr[AL];

    for (int i = 0; i < AL; i++)
    {
        printf("Enter %d element of array\t:", i);
        scanf("%d", &arr[i]);
    }

    int min = arr[0], posi = 0;

    for(int i = 1; i<AL; i++){
        if(arr[i]<min){
            min = arr[i];
            posi = i;
        }
    }

    printf("The smallest Value: %d\n", min);
    printf("Position of the element: %d", posi);
}