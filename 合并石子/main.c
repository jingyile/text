#include <stdio.h>
#include<string.h>
int DP[110][110];//记录状态
int A[110];//石子重量
int S[110];//S[i]代表石子1到j的重量总和
int n;
int dp(int i,int j)//代表石子i到j的最小耗费
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
            int temp=dp(i,k)+dp(k+1,j)+S[k]-S[i]+A[i]+S[j]-S[k+1]+A[k+1];//合并石子的耗费
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
            //便于以后计算i到j石子的和
        }
            for(i=1;i<=n;i++)
                printf("%d ",S[i]);
                printf("\n");
                */
            for(i=1;i<=n;i++)
        {
            S[i]+=A[i];
            //便于以后计算i到j石子的和
        }
            for(i=1;i<=n;i++)
                printf("%d ",S[i]);
    //printf("%d\n",dp(1,n));
    return 0;
}
