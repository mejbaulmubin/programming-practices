// #include <stdio.h>

// int main(){
//     int x;
//     int arr[6];

//     for(int i = 0; i<6; i++){
//         printf("Enter %d element of array\t:", i+1);
//         scanf("%d", &arr[i]);
//     }

//     for(int i = 0; i<6; i++){
//         x = arr[6-i-1];
//         printf("array_n[%d] = %d\n", i, x);
//     }
// }

#include <stdio.h>
#define AL 10

int main()
{
    int temp;
    int arr[AL];

    for (int i = 0; i < AL; i++)
    {
        printf("Enter %d element of array\t:", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < AL; i++)
    {
        if (i < (AL / 2))
        {
            temp = arr[AL - i - 1];
            arr[AL - i - 1] = arr[i];
            arr[i] = temp;
        }
    }


    for (int i = 0; i < AL; i++)
    {
        printf("array_n[%d] = %d\n", i, arr[i]);
    }
}