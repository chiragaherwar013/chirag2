#include<stdio.h>
#include<math.h>

int main()
{

 float x1,y1,y2,x2,mdpt,mdpty;
printf("Enter any value for x1: ");
scanf("%f",&x1);
printf("Enter any value for y1: ");
scanf("%f",&y1);
printf("Enter any value for x2: ");
scanf("%f",&x2);
printf("Enter any value for y2: ");
scanf("%f",&y2);

mdpt = (x1+x2)/2 ;
mdpty = (y1+y2)/2;
printf("the mid point is %.4f and %.4f ",mdpt,mdpty);






}
