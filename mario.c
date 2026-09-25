#include <stdio.h>

// get user input for height of pyramid

int main(void){

    int height;

    do { 
    printf("Enter height please: ");
    scanf("%d",&height);
    } while(height<1);

    for (int i=0; i<height; i++){
        for (int j=0; j<height-1-i; j++){
            printf(" ");
        }
        for (int k=0; k<i+1; k++){
            printf("#");
        }
        printf("\n");
    }
}
