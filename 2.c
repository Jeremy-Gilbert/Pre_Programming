#include<stdio.h>
int cube();
int main()
{
  int n;
  printf("Enter the Number to find the Cube: ");
  scanf("%d",&n);
  printf("The Cube of %d is %d",n,cube(n));
  return 0;
}
int cube(int s)
{
  s=s*s*s;
  return s;
}
