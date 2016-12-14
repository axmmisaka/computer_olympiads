#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<cstdlib>
#include<cmath>
using namespace std;
int exgcd(int m,int n,int &x,int &y)
{
	if(n==0)
	{
		x=1;y=0;
		return m;
	}
	int r=exgcd(n,m%n,x,y);
	int t=x;
	x=y;
	y=t-m/n*y;
	return r;
}
int main()
{
	int m,n,r,x,y;
	scanf("%d%d",&m,&n);
	r=exgcd(m,n,x,y);
	while(x<0) x+=n;
	printf("%d",x);
	return 0;
}
