#include<iostream>
#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
int n;
int a[20],b[20],c[100],d[100],sum=0;//c��d�������ж϶Խ��ߵ� 
int ok=0;
void print()
{
    if(ok==3)return;
    for(int i=1;i<=n;i++)
     for(int j=1;j<=n;j++)
      if(a[i]==j)printf("%d ",a[i]);
      ok++;
    printf("\n");
    return;
}
void dfs(int i){
    for(int j=1;j<=n;j++)
    {
        if(b[j]==0&&c[i+j]==0&&d[i-j+n-1]==0)
        {
            a[i]=j;
            b[j]=1;
            c[i+j]=1;
            d[i-j+n-1]=1;
            if(i==n){
                sum++;
                print();
            }
            dfs(i+1);
            b[j]=0;
            c[i+j]=0;
            d[i-j+n-1]=0;//��һ ��һ��dfsû���ҵ��⣬��ôҪ���ж��������� 
        }
    }
}
int main()
{
    
    scanf("%d",&n); 
    dfs(1);
    printf("%d",sum);
    return 0;
}
