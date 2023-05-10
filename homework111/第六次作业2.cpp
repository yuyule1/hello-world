#include<iostream>
#include<cstdio>
using namespace std; 
class sort
{
public:
	sort(){
	}
    void sort1(int num[],int n)
	{
		for(i=0;i<n;i++)
		{
			cin>>num[i];
		} 
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-1;j++)
			{
				if(num[j]>num[j+1])
				{
					int x=num[j];
					num[j]=num[j+1];
					num[j+1]=x;
				}
			}
		}
		for(i=0;i<n;i++)
		{
			cout<<num[i]<<" ";
		}
	}
private:
	int i;
	int j;
};
int main()
{
	int n;
	int num[100];
	cin>>n;
	sort aa;
	aa.sort1(num,n);
	return 0;
}
