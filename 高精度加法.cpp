//正数的高精度加法 超越long long范围的写法  a+b什么的low爆炸 
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include<string>
#include<stdio.h>
#include<cmath>
using namespace std;
char x[1000],y[1000];
int a[1000],b[1000],c[1060];
int main()
{
	int a1,a2;
	int l1=0;//l1是进位 
	scanf("%s",x);
	scanf("%s",y);
	a1=strlen(x);
	a2=strlen(y);
	for(int i=1;i<=a1;i++)
	{
		a[i]=x[a1-i]-48;
	}
	for(int i=1;i<=a2;i++)
	{
		b[i]=y[a2-i]-48;
	}
	int l;
	l=max(a1,a2);
	for(int i=1;i<=l;i++)
	{
		c[i]=(a[i]+b[i]+l1)%10;
		l1=(a[i]+b[i]+l1)/10;
	}
	if(l1==1)
	{
		l++;
		c[l]=1;
	}
	for(int i=l;i>=1;i--)
	{
		printf("%d",c[i]);
	}
	return 0;
}
