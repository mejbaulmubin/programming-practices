#include <stdio.h>

int main(){
    int num[7];

    for(int i = 0; i<7; i++){
        printf("Enter %d number of the element of the Array: ", i);
        scanf("%d", &num[i]);
    }

    for(int i = 0; i<7; i++){
        if(num[i]>0){
            printf("%d\n", num[i]);
        } else {
            printf("%d\n", 100);
        }
        
        
    }
}