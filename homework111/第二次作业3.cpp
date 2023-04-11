#include<iostream>
#include<cstdio>
using namespace std;
class jjzh
{
public:
	jjzh(){
	}
	void Print(int n)
	{
		for(i0=0;i0<n;i0++)
	{
		count=0;
		scanf("%d%d",&num,&x);
		for(i=0;(num+x-1)/x>0;i++)
		{
			zu[i]=num%x;
			num=num/x;
			count++;
		}
		for(i=count-1;i>=0;i--)
		{
			printf("%d",zu[i]);
		}
		printf("\n");
		
	}
	}
private:
	int i0,i,count,num,x;
	int zu[30]={0};
};
int main()
{
	int n;
	cin>>n;
	jjzh aa;
	aa.Print(n);
	return 0;
}
