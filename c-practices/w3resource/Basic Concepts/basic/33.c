#include <stdio.h>
#define MAX 5

int main(){

    int number[MAX], max, num_pos=1;

    for(int i = 0; i<MAX; i++){
        printf("Enter a number: ");
        scanf("%d", &number[i]);
        printf("\n");
    }
    max=number[0];

    for(int i = 1; i<MAX; i++){
        if(max<number[i]){
            max = number[i];
            num_pos = i+1;
        }
    }

    printf("Highest value: %d\nPosition: %d", max, num_pos);
}
