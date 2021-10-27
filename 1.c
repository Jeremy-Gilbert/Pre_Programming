#include<stdio.h>
int square();
int main()
{
  int n;
  printf("Enter the Number to find the Square: ");
  scanf("%d",&n);
  printf("The Square of %d is %d",n,square(n));
  return 0;
}
int square(int s)
{
  s=s*s;
  return s;
}
