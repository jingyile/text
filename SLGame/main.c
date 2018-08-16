#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100//数组最大上限
char a[Maxsize][Maxsize];//此数组用于储存输入数据
int s[Maxsize][Maxsize];//此数组用于储存输出数据
int main()
{
    int i,j,m,n;
    scanf("%d %d",&n,&m);//分别表示雷区的行数和列数
    for(i=0;i<n;i++)
        scanf("%s",&a[i]);//输入数据
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
        {
            if(a[i][j]=='*')
            {
                s[i-1][j-1]++;//左上
                s[i-1][j]++;//上
                s[i-1][j+1]++;//右上
                s[i][j-1]++;//左
                s[i][j+1]++;//右
                s[i+1][j-1]++;//左下
                s[i+1][j]++;//下
                s[i+1][j+1]++;//右下
            }
        }
        }
        printf("\n");
        //输出结果
for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
        if(a[i][j]=='*')
            printf("*");//表示地雷格
        else
              printf("%d",s[i][j]);//周围地雷格的个数
    }
        printf("\n");
    }
return 0;
}
