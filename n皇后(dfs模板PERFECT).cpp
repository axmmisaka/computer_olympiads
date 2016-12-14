//n皇后问题以及DFS模板
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
int a[100],b[100],c[200],d[200],sum=0;
int n;
int sump=1;
void print()
{
    if(sump>3)
    {
        return ;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            {
                if(a[i]==j)
                printf("%d ",a[i]);
            }
    cout<<endl;
    sump++;
}
void dfs(int i)
{
    for(int j=1;j<=n;j++)
        if(!b[j]&&!c[i+j]&&!d[i-j+n-1])
        {
            a[i]=j;
            b[j]=1;
            c[i+j]=1;
            d[i-j+n-1]=1;
            if(i==n)
            {
                sum++;
                print();
            }
            dfs(i+1);
            b[j]=0;
            c[i+j]=0;
            d[i-j+n-1]=0;
        }
}
int main()
{
    scanf("%d",&n);
    dfs(1);
    printf("%d\n",sum);
    return 0;
} 
