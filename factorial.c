#include<stdio.h>
#include<stdlib.h>


int factorial(int numberf){

int factor = 1, i;

for(i=1; i<=numberf; i++){

factor = factor*i;
}

  return factor;
}


int main(){

int number;

printf("Please enter a number: ");
scanf("%d",&number);

printf("%d!:%d",number,factorial(number));

    return 0;
}


/*

long int multiplyNumbers(int n);

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    printf("Factorial of %d = %ld", n, multiplyNumbers(n));

    return 0;
}

long int multiplyNumbers(int n) {

  if (n>=1)

    return n*multiplyNumbers(n-1);

  else
    return 1;
}

*/