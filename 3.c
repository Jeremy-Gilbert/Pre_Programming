#include<stdio.h>
int swap();
int main()
{
  int n1,n2;
  printf("Enter 2 Numbers to Swap: ");
  scanf("%d%d",&n1,&n2);
  printf("The Number Before swaping is %d, %d\n",n1,n2);
  swap(&n1,&n2);
  printf("The Number After  swaping is %d, %d",n1,n2);
  return 0;
}
int swap(int *s1,int *s2)
{
  int t;
  t=*s1;
  *s1=*s2;
  *s2=t;
}
