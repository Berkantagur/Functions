#include<stdio.h>

void rectangle(int width, int length){

    int i,j;

    for(i=0; i<length; i++){

        for(j=0; j<width; j++){

            printf("* ");

        }
        printf("\n");
    }

}

int main(){

    int x,y;

    printf("Please enter length value:");
    scanf("%d",&x);

    printf("Please enter width value:");
    scanf("%d",&y);

    rectangle(y,x);

    return 0;
}