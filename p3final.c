#include <stdio.h>
int input_n()
{
  int a;
  printf("Enter a number\n");
  scanf("%d",&a);
  return a;
}
int sum_n(int n)
{
  int i,sum=0;
  for(i=1;i<=n;i++)
  {
    sum = sum + i;
  }
  return sum;
}
void output(int n,int sum)
{
  int i;
  for(i=1;i<n;i++)
  {
    printf("%d+",i);
  }
  printf("%d is %d\n",n,sum);
}
int main()
{
  int n=input_n();
  int sum=sum_n(n);
  output(n,sum);
  return 0;
}