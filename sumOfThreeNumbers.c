#include<stdio.h>
#include<stdlib.h>

int sum(int n1, int n2, int n3){

    int total;
    total=n1+n2+n3;

    return total;
}


int main(){

    int n1,n2,n3,t;

printf("Please enter n1 value:");
scanf("%d",&n1);

printf("Please enter n2 value:");
scanf("%d",&n2);

printf("Please enter n3 value:");
scanf("%d",&n3);

t = sum(n1,n2,n3);

printf("SUM:%d",t);

return 0;
}