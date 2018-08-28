#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,m;
    double n;
    while(scanf("%lf%d",&n,&m)!=EOF)
    {
    double s;
    s=0;
    for(i=0;i<m;i++)
    {
        s=s+n;
        n=sqrt(n);
    }
  printf("%.2lf\n",s);
    }
    return 0;
}
