#include <stdio.h>
#include <string.h>
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int ans=0;
    int xa[50],xb[50];//a,b对应的二进制数
    int la=0,lb=0;//a,b对应二进制数的长度
    int m;
    //将两个数转换为2进制数
    while(a)
    {
        m=a%2;
        a=a/2;
        la++;
        xa[la]=m;
    }
    while(b)
    {
        m=b%2;
        b=b/2;
        lb++;
        xb[lb]=m;
    }
    int i,j;
    int ll;
    ll=min(la,lb);
    for(i=1,j=1; i<=ll; i++,j++)
    {
        if(xa[i]==1&&xb[i]==1)
            ans++;
            //printf("%d ",ans);
    }
    if(la>lb)
    {
        for(i=ll+1; i<=la; i++)
        {
            if(xa[i]==1)
                ans++;
        }
    }
    else if(la<lb)
    {
        for(i=ll+1; i<=lb; i++)
        {
            if(xb[i]==1)
                ans++;
        }
    }
    printf("love you %d years\n",ans);
    return 0;
}
