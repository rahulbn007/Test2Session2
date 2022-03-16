#include<stdio.h>
#include<math.h>
int input_array_size()
{
  int n;
  printf("Enter the Number:\n");
  scanf("%d",n);
  return n;
}
void init_array(int n, int a[n])
{
  int i;
  for(i=1;i<=n;i++)
    a[i-1]=i;
}

void erotosthenes_sieve(int n, int a[n])
{
  a[0]=0;
  for(int i=1;i<sqrt(n);i++)
    {
      if(a[i]!=0)
      {
        for(int k=a[i]*a[i];k<=n;k+=a[i]
          a[k-1]=0;
      }
    }
}
void out_put(int n, int a[n])
{
  for(i=1;i<=n;i++)
    {
      if(a[i]!=0)
        printf("%d\n",a[i]);
    }
}
int main()
{
  int n=input_array_size();
  int a[100];
  init_array(n,a[n]);
  erotosthenes_sieve(n,a[n]);
  out_put(n,a[n]);
} 