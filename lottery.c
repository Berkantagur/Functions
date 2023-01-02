#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void lottery(){

int i, j;
srand(time(NULL));

for(i=1; i<=6; i++){//row

    printf("%d. Colon: ",i);

    for(j=1; j<=6; j++){//column

        printf("%d\t",1+rand()%45);
    }
    printf("\n");
}

}

int main(){

lottery();

    return 0;
}