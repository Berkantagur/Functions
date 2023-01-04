#include<stdio.h>

int cube(int number){

    int result=number*number*number;

    return result;
}


int main(){

int n;

printf("Please enter a number:");
scanf("%d",&n);

printf("RESULT:%d",cube(n));

    return 0;
}