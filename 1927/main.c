#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    while(scanf("%d",&n),n)
    {
                float s[n];
    int i;
    int a=0,b=0,c=0;
       for(i=0;i<n;i++)
       {
           scanf("%f",&s[i]);
       }
    for(i=0;i<n;i++)
    {
        if(s[i]>0&&s[i]<10)
            a++;
        else if(s[i]==0)
            b++;
        else
            c++;
    }
    printf("%d %d %d\n",c,b,a);
    }
    return 0;
}
