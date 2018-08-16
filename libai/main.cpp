#include <stdio.h>
#include <stdlib.h>
int f(int drink,int dou,int flower )
{
    if(dou==0&&flower==1&&drink==1)
    return 1;
    if(dou>=0&&flower>=0)
        return f(drink*2,dou-1,flower)+f(drink-1,dou,flower-1);
    return 0;
}
int main()
{
    int m,n;
    int time;
    int i;
    scanf("%d",&time);
    for(i=0;i<time;i++)
    {
    scanf("%d %d",&m,&n);
    printf("%d\n",f(2,m,n));
    }

    return 0;
}
