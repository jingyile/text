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
 memset(f,0x3f,sizeof(f));//��f[][]��ʼ��Ϊ�ܴ��һ��ֵ
    for(int i=1;i<=n;i++)
        f[i][i]=0;//��ʼ״̬
    for(int i=n-1;i>=1;i--)//�ӵ�i�ѵ���j�ѣ�j>i,�ɺ���ǰ���кϲ�
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
