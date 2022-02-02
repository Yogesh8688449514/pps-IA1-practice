#include<stdio.h>
int input()
{
  int a;
  printf ("enter the value of \n");
  scanf("%d",&a);
  return a ;

}
int add(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}

int output(int a,int b,int sum)
{
  printf("Sum of a and b is %d+%d=%d\n",a,b,sum);
}
int main()
{
  int a,b,sum;
  a=input();
  b=input();
  sum=add(a,b);
  output(a,b,sum);
  return 0;
}