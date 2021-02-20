#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main (void){

float dollar;

do{
    dollar= get_float("enter dollar: ");
} while(dollar <= 0);
float money=round (dollar*100);

int b=money/25;

int c= money-(b*25);
c=c/10;

int d=money-(b*25)-c*10;
d=d/5;

int e= money-(b*25)-c*10-d*5;

printf("%d\n", b+c+d+e);
printf("%d\n", b);
printf("%d\n", c);
printf("%d\n", d);
printf("%d\n", e);


}
