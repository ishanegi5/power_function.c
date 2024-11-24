#include<stdio.h>
#include <math.h>
int power(int base,int exponent)
{
    int i,result=1;
    for(i=1;i<=exponent;i++)
    {
        result*=base;
    }
    
    return result;
}
int main()
{ int base,exponent;
  printf("Enter base: ");
  scanf("%d",&base);
  printf("Enter exponent: ");
  scanf("%d",&exponent);
  printf("%d",power(base,exponent));
   printf("\nName: Isha Negi \nRoll number: 24 CE 47\n");
   return 0;
}
