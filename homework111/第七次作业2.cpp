#include<iostream>
#include<cstdio>
using namespace std;
class Pow{
public:
	Pow(){
	}
	int pow(int x,int n)
	{ 
		for(int i=0;i<n;i++)
		{
			p*=x;
		}
		return p;
	}
private:
	int p=1;
};
int main()
{
	int x,n;
	scanf("%d,%d",&x,&n);
	Pow aa;
	cout<<aa.pow(x,n);
	return 0;
}
