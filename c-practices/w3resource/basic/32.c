#include <stdio.h>

int main(){
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int y = (int)(100/x);

    printf("3\n");

    for(int i = 1; i<=y; i++){
        if((i*x+3)<100){
            printf("%d\n", i*x+3);
        }
    }
}
