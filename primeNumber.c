#include<stdio.h>

int isItPrime(int number){

int c;

for(c=2;c<number;c++){

    if(number%c==0){ 
        return 0;
    }
}

return 1;
}

int main(){

int n;
printf("Please enter a number more than '1': ");
scanf("%d",&n);

if(n>1){

    if(n==2)
        printf("%d is a prime number...",n);

    else{

        if(isItPrime(n)==0)
            printf("%d is not a prime number...",n);
    
        else 
            printf("%d is a prime number",n);
    }
}
else
    printf("Invalid value!!!");

return 0;
}