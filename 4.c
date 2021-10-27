#include<stdio.h>
int fact();
int main()
{
    int n,c,r=1;
    printf("Enter the Number to find the Factorial: ");
    scanf("%d",&n);
    c=n;
    for(int i=1;i<n;i++)
    {
      r=fact(i,r);
    }
    printf("%d",r);
}
int fact(int t,int x)
{
  x=x*(t+1);
  return x;
}
