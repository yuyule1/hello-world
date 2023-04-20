#include<iostream>
#include<cstdio>
using namespace std;
class timechg{
	public:
		timechg(){
		}
		int chg(int BJT)
		{
			for(i=0;(BJT+9)/10>0;i++)
			{
				a[3-i]=BJT%10;
				BJT=BJT/10;
				count++;
			}
				num1=10*a[0]+a[1];
				num2=10*a[2]+a[3];
				Numchg(num1,num2,a1);
				Print(a1);
		}
		int Numchg(int num1,int num2,int a1[4])
		{
		    if(num1<8)
			{
				num1=num1+16;
			}
			else if(num1>=8)
			{
				num1=num1-8;
			}
			a1[1]=num1%10;
		    num1=num1/10;
		    a1[0]=num1;
		    a1[3]=num2%10;
		    num2=num2/10;
		    a1[2]=num2;
		}
		int Print(int a1[4])
		{
			for(i=0;i<4;i++)
		    {
		    	if(xx!=0)
		    	{
		    		printf("%d",a1[i]);
		    	}
		    	else if(a1[i]!=0)
		    	{
		    		printf("%d",a1[i]);
		    		xx=1;
		    	}
		    }
		}
	private:
	int count=0,i,xx=0;
	int a[4]={0};
	int a1[4]={0};
	int num1,num2;
};
int main()
{
	int UTC,BJT;
	cin>>BJT;
	timechg aa;
	aa.chg(BJT);
	return 0;
}
