#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[80][80];
    int i,j,k;
    int m,n;
    int t[80]={0};//存储每列最长字符串的长度

    scanf("%d",&n);
    getchar();
    int r;
    int key;
    int sign=0;//记录表格的列数
    for(i=0;i<n;i++)
    {
        r=0;
        sign=0;
        gets(ch[i]);
        j=0;
        while(ch[i][j]!='\0')
        {
            if(ch[i][j]!=',')
                r++;
            else
            {
                    if(t[sign]<r)
                    t[sign]=r;
            r=0;
            sign++;
        }
        j++;
    }
    if(t[sign]<r)
        t[sign]=r;
    sign++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<sign;j++)
        {
            printf("+");
            for(k=0;k<t[j];k++)
                printf("-");
        }
        printf("+\n");
        j=0;
        r=0;
        for(m=0;m<sign;m++)
        {
            printf("|");
        key=0;
        while(ch[i][j]!=','&&ch[i][j]!='\0')
        {
            printf("%c",ch[i][j]);
            j++;
            key++;
        }
        for(k=0;k<t[r]-key;k++)
        printf(" ");
        r++;
        j++;
         }
         printf("|\n");
         }
         for(j=0;j<sign;j++)//输出表格的最底界
            {
                printf("+");
         for(k=0;k<t[j];k++)
            printf("-");
         }
         printf("+\n");
         return 0;
         }


