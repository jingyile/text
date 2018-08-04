/*烟台大学计算机学院
作者：景怡乐
完成时间：2017年6月5日
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int a[10];
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<10; i++)
    {
        int t;
        t=a[i];//设置哨兵
        for(j=i-1; a[j]>t&&j>=0; j--)//寻找插入位置
            a[j+1]=a[j];//前一个大于当前，当前等于前一个
        a[j+1]=t;
    }
    for(i=0; i<10; i++)
        printf("%d\n",a[i]);
    return 0;
}
