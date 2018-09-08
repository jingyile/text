#include<iostream>
#include<memory.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int weight[n+10];
	int sum[n+10][n+10];
	int f[n+10][n+10];
	memset(weight,0,sizeof(weight));
	memset(sum,0,sizeof(sum));
	memset(f,0,sizeof(f));
	for(int i=1;i<=n;i++)
	{
		cin>>weight[i];
		sum[i][i]=weight[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			sum[i][j]=sum[i][j-1]+weight[j];
		}
	}
 memset(f,0x3f,sizeof(f));//将f[][]初始化为很大的一个值
    for(int i=1;i<=n;i++)
        f[i][i]=0;//初始状态
    for(int i=n-1;i>=1;i--)//从第i堆到第j堆，j>i,由后往前进行合并
    {
        for(int j=i+1;j<=n;j++)
        {
			for(int k=i;k<=j-1;k++)
			{
				f[i][j]=min(f[i][j],(f[i][k]+f[k+1][j]+sum[i][j]));
			}
		}
	}
	cout<<f[1][n]<<endl;
	return 0;

}
