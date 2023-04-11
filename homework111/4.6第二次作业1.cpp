#include<iostream>
#include<cstdio>
using namespace std;
class yhsanjiao
{
public:
	yhsanjiao(){
	}
	void Print(int N)
	{

		int jiao[100][100]={0};
		for(x=0;x<N;x++)
	{
		scanf("%d",&num);
		for(i=0;i<num;i++)
		{
			jiao[i][0]=1;
		}
		for(i=1;i<num;i++)
		{
			for(j=1;j<i+1;j++)
			{
				jiao[i][j]=jiao[i-1][j-1]+jiao[i-1][j];
			} 
		}
		for(i=0;i<num;i++)
		{
			for(j=0;j<i+1;j++)
			{
				printf("%d ",jiao[i][j]);
			}
			printf("\n");
		}
		
	}
	}
private:
	int i,num,j,x;

};
int main()
{
    int N;
	scanf("%d",&N);
    yhsanjiao aa;
    aa.Print(N);
	return 0;
}







