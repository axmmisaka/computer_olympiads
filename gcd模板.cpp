//GCDģ��
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
	}//���� 
	while(n!=0)
	{
		gcdnm=n;
		n=m%n;
		m=gcdnm;
	}
	
}//�����Լ�����ǵݹ�) 
int main()
{
	scanf("%d%d",&n,&m);
	gcd();
	printf("%d",m);
}
