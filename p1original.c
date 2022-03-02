#include<stdio.h>
void input(int *num1,int *den1,int*num2, int *den2)
{
  printf("enter the value of numerator of the first number\n");
  scanf("%d",num1);
   printf("enter the value of denominator  of the first number\n");
  scanf("%d",den1);
   printf("enter the value of numerator of the second number\n");
  scanf("%d",num2);
   printf("enter the value of denominator of the first number\n");
  scanf("%d",den2);
}
void add(int num1,int den1,int num2,int den2,int*num3,int*den3)
{
  int i,gcd;
  num3=(num1*den2)+(den1*num2);
  den3=den1*den2;
  for(i=1,i<=num3 && i<=den3;i++)
    {
      if(num3%i==0 && den3%i==0)
        gcd=i;
    }
}
void output(int num1,int den1,int num2 ,int den1, int num3,int den3)
{
  printf("the sum of %d/%d + %d/%d is %d/%d\n",num1,den1,num2,den2,num3/gcd,den3/gcd);
}
int main()
{
  int a,b,c,d,e,f;
  input(&a,&b,&c,&d);
  add(a,b,c,d,&e,&f);
  output(a,b,c,d,e,f);
  return 0;
}
