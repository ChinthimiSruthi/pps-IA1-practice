#include <stdio.h>
void input_two_string(char *a,char *b)
{
  printf("Enter two strings\n");
  scanf("%s%s",a,b);
}
int str_cmp(char *a,char *b)
{
  int i;
  for(i=0;a[i]==b[i]&&a[i]!='\0';i++);
  {
    return a[i]-b[i];
  }
}
void output(char *a,char *b,int result)
{
  if (result>0)
  {
    printf("%s is greater than %s\n",a,b);
  }
  else if(result<0)
  {
    printf("%s is greater than %s\n",b,a);
  }
  else if(result==0)
  {
    printf("%s and %s are equal\n",a,b);
  }
}
int main()
{
  char a[100],b[100];
  input_two_string(a,b);
  int result=str_cmp(a,b);
  output(a,b,result);
  return 0;
}

