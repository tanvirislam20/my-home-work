#include<stdio.h>
int main()
{
   int number,a,a1,b,b1,c,c1,d,d1,sum;
   printf("Enter the 4 digit number:");
   scanf("%d",&number);
   a=number/10;
   a1=number%10;
   b=a/10;
   b1=a%10;
   c=b/10;
   c1=b%10;
   d=c/10;
   d1=c%10;
   sum=a1+d1;
   printf("sum of the first and last digit number is=%d%",sum);
}