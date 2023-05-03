#include<iostream>
#include<stdio.h>
class Duo{
	public:
		Duo(){
		}
		void cunshu()
		{
			
		}
		void duoadd()
		{
			
		}
	private:
};
int main()
{
	int i;
	int x[101];
	int num[101]={0};
	int sum[101]={0};
	for(i=0;;i++)
	{
		int x1,num1;
		scanf("%d%d",&x1,&num1);
		x[x1]=x1;num[x1]=num1;
		sum[x1]=sum[x1]+num[x1];
		if(x1==0)
		{
			break;
		}
	}
	for(i=0;;i++)
	{
		int x2,num2;
		scanf("%d%d",&x2,&num2);
		x[x2]=x2;num[x2]=num2;
		sum[x2]=sum[x2]+num[x2];
		if(x2==0)
		{
			break;
		}
	}
	int count=0;
	for(i=101;i>=0;i--)
	{
		if(count==1&&x>0)
		{
			count++;
			printf("%dx%d",sum[i],x[i]);
		}
		else if(count>0&&sum[i]!=0)
		{
			if(x[i]>1&&sum[i]>0)
			printf("+%dx%d",sum[i],x[i]);
			else if(x[i]>1&&sum[i]<0)
			printf("-%dx%d",sum[i],x[i]);
			else if(x[i]==1&&sum[i]>0)
			printf("+%dx",sum[i]);
			else if(x[i]==1&&sum[i]<0)
			printf("-%dx",sum[i]);
			else if(x[i]==0&&sum[i]>0)
			printf("+%d",sum[i]);
			else if(x[i]==0&&sum[i]<0)
			printf("-%d",sum[i]);
		}
		else if(sum[i-1]>0)
		count++;
	}
	return 0;	
}
