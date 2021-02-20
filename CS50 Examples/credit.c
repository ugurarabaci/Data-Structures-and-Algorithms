#include <cs50.h>
#include <stdio.h>
#include <math.h>

int find_length(long long a){
    int len;
    int b=0;
    for(len=0; a!=0; a/=10){len++;
    }
    return len;
}
int checkcredit(long a, long b){
    int x;
    long sayac=0;  
    long c1;
 for(x=0; a!=0; x++, a/=10){
    if(x%2==0)
        sayac+=a%10;
    else {
        c1=2*(a%10);
        sayac+= c1/10+c1%10;
              }}
        return (sayac%10);}

void checknumber(long a){

    if((a>=34e13&&a<35e13)|| (a>=37e13&&a<38e13))
    printf("AMEX\n"); 
    else if(a>=51e14&&a<56e14)
    printf("MASTERCARD\n"); 
    else  if((a>=4e12&&a<5e12)|| (a>=4e15&&a<5e15))
    printf("VISA\n"); 
    else printf("INVALID\n"); 

}    

int main(void){
    long a;
    int result;
        do{
         a= get_long("Number: ");
    }while(a<0);
    long b= find_length(a);
    if(b==13 || b==14 ||b==15 ||b==16){
        result=checkcredit(a, b);
        if (result==0){
            checknumber(a);
        }else printf("INVALID\n"); 
     }else 
    printf("INVALID\n"); 

 
}
