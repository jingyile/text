#include <stdio.h>
#include<string.h>
int DP[110][110];//��¼״̬
int A[110];//ʯ������
int S[110];//S[i]����ʯ��1��j�������ܺ�
int n;
int dp(int i,int j)//����ʯ��i��j����С�ķ�
{
    if(DP[i][j]!=-1)
        return DP[i][j];
    if(i==j)
        {
            DP[i][j]=0;
    return 0;
        }
        int ans=9999999;
        int k;
        for(k=i;k<j;k++)
        {
            int temp=dp(i,k)+dp(k+1,j)+S[k]-S[i]+A[i]+S[j]-S[k+1]+A[k+1];//�ϲ�ʯ�ӵĺķ�
            if(temp<ans)
                ans=temp;
        }
        DP[i][j]=ans;
        return ans;

}
int main()
{
    scanf("%d",&n);
    memset(DP,-1,sizeof(DP));
    int i;
    for(i=1;i<=n;i++)
        scanf("%d",&A[i]);
        int s=0;
    /*for(i=1;i<=n;i++)
        {
            s+=A[i];
            S[i]=s;
            //�����Ժ����i��jʯ�ӵĺ�
        }
            for(i=1;i<=n;i++)
                printf("%d ",S[i]);
                printf("\n");
                */
            for(i=1;i<=n;i++)
        {
            S[i]+=A[i];
            //�����Ժ����i��jʯ�ӵĺ�
        }
            for(i=1;i<=n;i++)
                printf("%d ",S[i]);
    //printf("%d\n",dp(1,n));
    return 0;
}
