#include<stdio.h>
#include<stdlib.h>


int exponentiationInvolution(int base, int exponent){

int result = 1, i;

for(i=1; i<=exponent; i++){

result = result*base;
}

  return result;
}


int main(){

int number, expo;

printf("Please enter a base value: ");
scanf("%d",&number);

printf("Please enter a exponent value: ");
scanf("%d",&expo);

printf("Base %d exponent %d: %d",number, expo, exponentiationInvolution(number,expo));

    return 0;
}