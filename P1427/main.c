#include <stdio.h>
#include <stdlib.h>
int i=0,a[105];
int main()
{
    int j;
    do
    {
        ++i;
        scanf("%d",&a[i]);
    }while(a[i]!=0);
    for
        (j=i-1;j>=1;j--)
        printf("%d ",a[j]);
    return 0;
}
