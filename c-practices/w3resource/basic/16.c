#include <stdio.h>

int main(){
    int amount;
    int notes[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

    int n = 10;

    printf("The amout of money\t:");
    scanf("%d", &amount);

    for(int i = 0; i<n ; i++){
        if (amount>=notes[i]){
            int count = amount/notes[i];

            notes[i];

            printf("%d Taka Notes\t: %d of \n", notes[i], count);
        }
    }
    return 0;
}