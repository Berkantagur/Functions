#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void isItPalindrome(int x){

int remainder, reversed=0, n;
n=x;
while(x!=0){
    
    remainder=x%10;
    reversed = reversed*10 + remainder;
    x/=10;
}

if (reversed == n){
    printf("Palindrome");
}
else 
    printf("Not Palindrome");

}

int main(){

int c;
srand(time(NULL));

c = 100 + rand()%(999-100+1);
printf("%d is ",c);
isItPalindrome(c);

return 0;
}

