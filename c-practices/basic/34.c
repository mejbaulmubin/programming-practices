#include <stdio.h>

void che(int x, int y){
    int sum = 0;
    printf("%d and %d\n", x, y);
    for(int i = x; i<=y; i+=2){
        printf("List of Odd number: %d\n", i);
        sum = sum+i;
    }
    printf("Sum : %d", sum);
}

int main(){
    int x, y;
    printf("First Number Enter: ");
    scanf("%d", &x);
    printf("Second Number Enter: ");
    scanf("%d", &y);

    if(x>y){
        int z = (y%2==0) ? y+1 : y;
        che(z, x);
    } else {
        int z = (x%2==0) ? x+1 : x;
        che(z, y);
    }

}
