#include<iostream>
#include<cstring>
#include<ctime>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
int n;
int main()
{
	srand(time(NULL));
	n=rand()%52+1;
	printf("%d\n",n);
	system("pause");	
	return 0;
}

