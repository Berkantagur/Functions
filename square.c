#include<stdio.h>
#include<stdlib.h>

int square(int number){

int square;
square = number * number;

return square;
}

int main(){

int num;
printf("Please enter a number: ");
scanf("%d",&num);

printf("Square of entered number is %d",square(num));

return 0;
}

/*
float square(float number);

int main(){

 float no, squareResult;

 printf("Enter the number: ");
 scanf("%f",&no);

 squareResult=square(no);
 
 printf("Square of given number is= %f", squareResult);

}

float square(float number){

 float square=number*number;
 
 return square;
}

*/