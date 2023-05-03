#include<stdio.h>
int sushu(int n);
int shuzihe(int n);
int shuziji(int n);
int pfhe(int n);
int main()
{
	int i;
	int count=0;
	int sssum=0;
	for(i=100;i<=999;i++)
	{
		if(sushu(i)==1&&shuzihe(i)==1&&shuziji(i)==1&&pfhe(i)==1)
		{
		count++;
		sssum+=i;
		printf("第%d个超级素数为%d\n",count,i);
		}
	}
	printf("【100，999】超级素数个数=%d\n",count); 
	printf("【100，999】超级素数之和=%d",sssum);
	return 0;
}

int sushu(int n)
{
	int a=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			a++;
			break;
		}
	}
	if(a==0)
	return 1;
	else
	return 0;
}

int shuzihe(int n)
{
	int num[3];
	num[2]=n%10;
	n=n/10;
	num[1]=n%10;
	n=n/10;
	num[0]=n%10;
	int sum=num[1]+num[2]+num[0];
	if(sushu(sum)==1)
	return 1;
	else return 0;
}

int shuziji(int n)
{
	int num[3];
	num[2]=n%10;
	n=n/10;
	num[1]=n%10;
	n=n/10;
	num[0]=n%10;
	int ji=num[0]*num[1]*num[2];
	if(sushu(ji)==1)
	return 1;
	else return 0;
}

int pfhe(int n)
{
	int num[3];
	num[2]=n%10;
	n=n/10;
	num[1]=n%10;
	n=n/10;
	num[0]=n%10;
	int pfh=num[0]*num[0]+num[1]*num[1]+num[2]*num[2];
	if(sushu(pfh)==1)
	return 1;
	else return 0;
}













