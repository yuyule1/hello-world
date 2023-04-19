#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int huiwen(int m)
{
	int i,cc=0,count=0,x=0;
	int num0[100];
	for(i=0;(m+9)/10>0;i++)
		{
			num0[i]=m%10;
			m=m/10;
			count++;
		}
	for(i=0;i<count/2;i++)
	{
		if(num0[i]!=num0[count-1-i])
		{
			x++;
		}
	}
	if(x!=0)
	return 1;
	else
	return 0;
}
int main()
{
	int N,m,k,i,count=0,cc=0,pan=0;
	cin>>N;
for(i=0;i<N;i++)
{
	scanf("%d%d",&m,&k);
	for(;pan<k;)
	{
		if(huiwen(m)==0)
		{
			printf("%d ",m);
			pan++;
		}
		m++;
	}
}
	return 0;
}
