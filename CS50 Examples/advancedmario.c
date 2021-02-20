#include <cs50.h>
#include <stdio.h>

int main (void){

    int a;
    do {         
        a= get_int("Height: ");
    }
         while(a<1 || a>8);{   
             for (int i = 1; i <=a; i++)
  {
                     for (int k = a-1; k >= i; k--)
      {
          printf(" ");
      }
                    for (int j = 1; j <= i; j++)
      {
          printf("#");
          
      }           
      printf("  ");
                     for (int n =1; n <= i; n++)
      {
          printf("#");
      }

      printf("\n");
  }
             
    }

}
