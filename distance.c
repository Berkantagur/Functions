#include<stdio.h>
#include<math.h>

int x1,n1,x2,n2,d1,d2;
float d;

int main(){

printf("Please enter the coordinates of the first point:\n");

printf("(x1,n1)=");
scanf("%d %d",&x1,&n1);

printf("Please enter the coordinates of the second point:\n");

printf("(x2,n2)=");
scanf("%d %d",&x2,&n2);


d1=pow((x2-x1),2);  /* pow(x,y) fonksiyonu x’in y kuvvetidir */
d2=pow((n2-n1),2);
d=sqrt(d1+d2);

printf("The distance between two points:%0.1f\n\n",d);

return 0;
}