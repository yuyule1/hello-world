#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int UTC,BJT;
	int i,count=0,xx=0;
	cin>>BJT;
	int a[4]={0};
	int a1[4]={0};
	for(i=0;(BJT+9)/10>0;i++)
	{
		a[3-i]=BJT%10;
		BJT=BJT/10;
		count++;
	}
	printf("count=%d\n",count);
	for(i=0;i<4;i++)
	{
		cout<<a[i];
	}
	printf("\n");
	int num1=10*a[0]+a[1];
	int num2=10*a[2]+a[3];
	cout<<num1<<endl<<num2<<endl;
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
	return 0;
}
