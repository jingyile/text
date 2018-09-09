#include<iostream>
#include<memory.h>
using namespace std;
int n;
int f[35][35];
int root[35][35];
int get_Max(int left,int right)
{
	if(left>right)
	{
		return 1;
	}
	if(f[left][right]==0)
	{
		for(int i=left;i<=right;i++)
		{
			int temp=f[left][right];
			f[left][right]=max((get_Max(left,i-1)*get_Max(i+1,right)+f[i][i]),f[left][right]);
			if(temp<f[left][right])

			{
				root[left][right]=i;
			}
		}
	}
	return f[left][right];
}
void dfs(int left,int right)
{
	if((left>right))
	{
		return ;
	}
	else
	{
		cout<<root[left][right]<<' ';
	    dfs(left,root[left][right]-1);
	    dfs(root[left][right]+1,right);
	}
}
int main(){
	cin>>n;
	memset(f,0,sizeof(f));
	memset(root,0,sizeof(root));
	for(int i=1;i<=n;i++)
	{
		int m;
		cin>>m;
		f[i][i]=m;
		root[i][i]=i;
	}
	cout<<get_Max(1,n)<<endl;
	dfs(1,n);
	return 0;
}
