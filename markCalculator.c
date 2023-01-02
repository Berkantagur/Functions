#include<stdio.h>
#include<stdlib.h>

void markCalculator(int vize, int final){

float average;
average = vize*0.40 + final*0.60;

if(average>=90 && average<=100)
    printf("Your mark score: %.2f ~ AA",average);

else if(average>=70 && average<90)
    printf("Your mark score: %.2f ~ BB",average);

else if(average>=50 && average<70)
    printf("Your mark score: %.2f ~ CC",average);

else if(average>=30 && average<50)
    printf("Your mark score: %.2f ~ DD",average);

else 
    printf("Your mark score: %.2f ~ FF\nYou have failed:(",average);

}

int main(){

int vize,final;

printf("Please enter your vize mark score: ");
scanf("%d",&vize);

printf("Please enter your final mark score: ");
scanf("%d",&final);

markCalculator(vize,final);

    return 0;
}