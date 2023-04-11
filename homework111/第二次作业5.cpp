#include<iostream>
#include<cstdio>
using namespace std;
class jjzhplus
{
public:
	jjzhplus(){
	}
	void Print(int N,int x)
	{
		for(i=0;(N+x-1)/x>0;i++)
			{
				zu[i]=N%x;
				N=N/x;
				count++;
			}
		for(i=count-1;i>=0;i--)
			{   if(zu[i]<10)
			    printf("%d",zu[i]);
			    else
			    printf("%c",'A'+zu[i]-10);
			}
	}
private:
	int zu[100];
	int i,count =0;
};
int main()
{
	int N,x;
	scanf("%d%d",&N,&x);
	jjzhplus aa;
	aa.Print(N,x);
	return 0;
}
