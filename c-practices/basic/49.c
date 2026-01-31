#include <stdio.h>

int main(){
    int x, y = 1;
    printf("Enter a number\t:");
    scanf("%d", &x);
    int arr[7];

    for(int i = 0; i<7; i++){
        arr[i] = y;
        y *= x;
        printf("arr[%d] = %d\n",i ,arr[i]);
    }
}