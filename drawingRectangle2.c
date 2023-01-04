#include<stdio.h>

//İçi boş dikdörtgen çizme
void rectangle(int length, int width){

    int i,j;

    for(i=0; i<length; i++){

        for(j=0; j<width; j++){
            
            if(i==0 || i==(length-1))

                printf("* ");

            else{
                
                if(j==0 || j==(width-1))

                printf("* ");
                
                else 
                printf("  ");
            }

            
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

    rectangle(x,y);
    
    return 0;
}