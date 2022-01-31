#include <stdio.h>
struct complex
{
  float real,imaginary;
};
typedef struct complex Complex;

int get_n()
{
  int n;
  printf("Enter number of complex number to be added\n");
  scanf("%d",&n);
  return n;
}
Complex input_complex()
{
 Complex a;
  printf("Enter complex number\n");
  scanf("%f%f",&a.real,&a.imaginary);
  return a; 
}
void input_n_complex(int n, Complex c[n])
{
  int i;
  for(i=0;i<n;i++)
  c[i] = input_complex();
}
Complex add(Complex a, Complex b)
{
  Complex c1;
  c1.real = a.real + b.real;
  c1.imaginary = a.imaginary + b.imaginary;
  return c1;
}
Complex add_n_complex(int n, Complex c[n])
{
  int i;
  Complex c1;
  c1.real=0;
  c1.imaginary=0;
  for(i=0;i<=n;i++)
  c1 = add(c1,c[i]);
}
void output(int n, Complex c[n], Complex result)
{
  int i;
  for(i=0;i<n;i++)
  printf(" %f + %fi",c[i].real,c[i].imaginary);
  printf("%f + %fi is %f + %fi \n",c[n-1].real,c[n-1].imaginary,result.real,result.imaginary);
}
int main()
{
  int n;
  Complex c[n],result;
  n=get_n();
  input_n_complex(n,c);
  result=add_n_complex(n,c);
  output(n,c,result);
  return 0;
}
