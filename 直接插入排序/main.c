/*��̨��ѧ�����ѧԺ
���ߣ�������
���ʱ�䣺2017��6��5��
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
        t=a[i];//�����ڱ�
        for(j=i-1; a[j]>t&&j>=0; j--)//Ѱ�Ҳ���λ��
            a[j+1]=a[j];//ǰһ�����ڵ�ǰ����ǰ����ǰһ��
        a[j+1]=t;
    }
    for(i=0; i<10; i++)
        printf("%d\n",a[i]);
    return 0;
}
