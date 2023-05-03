#include<iostream>
#include<cstdio>
using namespace std;

class Sum{
	public:
		Sum(){
		};
		int qiusum()
		{
			for(;;)
			{
				cin>>x;
				if(x<=0)
				break;
				else if(even(x)==0)
				{
					sum+=x;
				}
			}
			return sum;
		}
		int even(int n)
		{
			if(n%2==0)
			{
				return 1;
			}
			else if(n%2!=0)
			{
				return 0;
			}
		}
	private:
		int x,sum=0;
};

int main()
{
	Sum aa;	
	cout<<aa.qiusum()<<endl; 
	return 0;
} 
