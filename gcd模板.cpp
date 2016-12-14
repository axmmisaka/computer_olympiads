//GCD模板
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cstdlib>
#include<cmath>
using namespace std;
int n,m;
int gcdnm;
void gcd()
{
	if(n>m)
	{
		int l;
		l=n;
		n=m;
		m=l;
	}//交换 
	while(n!=0)
	{
		gcdnm=n;
		n=m%n;
		m=gcdnm;
	}
	
}//求最大公约数（非递归) 
int main()
{
	scanf("%d%d",&n,&m);
	gcd();
	printf("%d",m);
}
