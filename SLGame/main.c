#include <stdio.h>
#include <stdlib.h>
#define Maxsize 100//�����������
char a[Maxsize][Maxsize];//���������ڴ�����������
int s[Maxsize][Maxsize];//���������ڴ����������
int main()
{
    int i,j,m,n;
    scanf("%d %d",&n,&m);//�ֱ��ʾ����������������
    for(i=0;i<n;i++)
        scanf("%s",&a[i]);//��������
    for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
        {
            if(a[i][j]=='*')
            {
                s[i-1][j-1]++;//����
                s[i-1][j]++;//��
                s[i-1][j+1]++;//����
                s[i][j-1]++;//��
                s[i][j+1]++;//��
                s[i+1][j-1]++;//����
                s[i+1][j]++;//��
                s[i+1][j+1]++;//����
            }
        }
        }
        printf("\n");
        //������
for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
    {
        if(a[i][j]=='*')
            printf("*");//��ʾ���׸�
        else
              printf("%d",s[i][j]);//��Χ���׸�ĸ���
    }
        printf("\n");
    }
return 0;
}
