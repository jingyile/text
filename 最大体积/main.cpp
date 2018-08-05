#include <stdio.h>
int n;
int a[510];
int f[100001];
void swap(int *a,int *b)
{
   int c;
   c=*a;
   *a=*b;
   *b=c;
}
int gcd(int a,int b)
{
    if(a>b)
      swap(&a,&b);
    if(a==0)
      return b;
    return gcd(b%a,a);
}
int main()
{
    int i,j,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        scanf("%d",&a[i]);
    t=a[1];
    for(i=2;i<=n;i++)
        t=gcd(t,a[i]);
    if(t!=1)
    {
        printf("0\n");
        return 0;
    }
    else
    {
          f[0]=1;
          for(i=1;i<=n;i++)
          {
              for(j=a[i];j<=65536;j++)
                  f[j] |= f[j-a[i]];
          }
          for(i=65536;i>=0;i--)
          {
              if(!f[i])
              {
                  printf("%d\n",i);
                  return 0;
              }
          }
          printf("0\n");
          return 0;
    }
}
