#include<stdio.h>
#include<stdlib.h>

int swap(int number1, int number2);

int main(){
int num1, num2, as;

printf("Please enter first number: ");
scanf("%d",&num1);

printf("Please enter second number: ");
scanf("%d",&num2);

printf("NUMBER BEFORE SWAP\n-------------------\nNumber1:%2.d\nNumber2:%2.d\n\n\n",num1,num2);

swap(num1,num2);

    return 0;
}


int swap(int number1, int number2){

int temp;

temp = number1;
number1=number2;
number2=temp;

printf("NUMBER AFTER SWAP\n-----------------\nNumber1:%2.d\nNumber2:%1.d",number1,number2);

return 0;
}

