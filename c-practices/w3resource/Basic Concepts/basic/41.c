#include <stdio.h>

int main(){
    int x;
    printf("Enter the line number: ");
    scanf("%d", &x);
    int y = 0;

    for(int i = 1; i<=x; i++){
        y = y + 3;
        for(int j = y-2; j<=y; j++){
        printf("%d ", j);
    }
    
        printf("\n");
    }
}