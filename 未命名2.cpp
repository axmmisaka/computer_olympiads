#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
using namespace std;
const int N=100000;
int n;
int num[N];
void dfs(int a,int b,int sum)//      ���� ���� 
{
	num[b]=a;
	if(sum==n)
	{
		for(int i=1;i<=b;i++)
		{
			printf("%d",num[i]);
			if(i<=b-1) printf("+");
		}
		printf("\n");
		return ;
	}
	for(int i=a;i<=n-sum;i++)
	dfs(i,b+1,sum+i); //����Գ����� 
	num[b]=0;//���� 
	 
}
int main()
{
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		dfs(i,1,i);
	}
	return 0;
}
