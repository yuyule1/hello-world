#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class Cancel{
public:
	Cancel(int k){
    this->k=k;
	}
	int IsCancel (int a[],int n)
	{
		for(i = 0;i < n; i++)
		{
		cin>>a[i];
		if(a[i]>0)
		yes++;
		}
		if(yes<k)
		return 1;
		else
		return 0;
	}
	void Judge(int a[],int n)
	{
		if(IsCancel(a,n)==1)
		cout<<"NO"<<endl;
		else
		cout<<"YES"<<endl;
	}
private:
	int i;
	int no=0,yes=0;
	int n,k;
	int b[100];
};
int main()
{
	int time[100],n,k;
	scanf("%d%d",&n,&k);
	Cancel a(k);
	a.Judge(time,n);
	return 0;
}
