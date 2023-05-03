#include<iostream>
#include<stdio.h>
using namespace std;
class Andian{
	public:
		Andian(){
		}
}; 
int main()
{
	int a[100][100];
	int n;
	cin>>n;
    int i,j;
    int count=0,count1=0;
	int m=0,cm=0;
    int end=0;
    for(i=0;i<n;i++)
    {
    	for(j=0;j<n;j++)
    	{
    		cin>>a[i][j];
    	}
    }
    for(i=0;i<n;i++)
    {
    	m=0;cm=0;
    	for(j=0;j<n;j++)
    	{
    		if(a[i][j]>m)
    		{
    			count=j;
    			m=a[i][j];
    		}
    	}
    	cout<<"count="<<count<<" m="<<m<<endl;
    	cm=a[i][count];
    	for(j=0;j<n;j++)
    	{
    		if(a[j][count]<cm)
    		{
    			count1=j;
    			cm=a[j][count];
    		}
    	}
    	cout<<"count1="<<count1<<" cm="<<cm<<endl;
    	if(m==cm)
    	{
    		cout<<count1<<" "<<count<<endl;
    		end=1;
    		break;
    	}
    }
    if(end==0)
    {
    	cout<<"NO"<<endl;
    }
	return 0;
}
