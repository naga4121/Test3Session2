#include<stdio.h>
void input_n_and_r(int *n, int *r)
{
  printf("Enter n: ");
  scanf("%d", n);
  printf("Enter r: ");
  scanf("%d", r);
}
int ncr(int n , int r)
{
  int a=1,b=1,c=1,diff,result;
  diff=n-r;
  for(int i =1; i<=n;i++)
    {
      a=a*i;
    }

  for(int i =1;i<=diff;i++)
    {
      b=b*i;
    }

  for(int i =1; i<=r;i++)
    {
      c=c*i;
    }

  result = a/(b*c);
  return result;
}

void output(int n, int r, int result)
{
  printf("%dC%d = %d\n", n,r,result);
}
int main()
{
  int n,r,result;
  input_n_and_r(&n, &r);
  result = ncr(n,r);
  output(n,r,result);
  return 0;  
}