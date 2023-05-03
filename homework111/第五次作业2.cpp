#include<iostream>
#include<cstdio>
using namespace std;
class Math{
	public:
		Math(){
		};
		int Print(int x,int y)
		{
			cout<<GCD(x,y)<<endl<<LCM(x,y)<<endl;
		}
		int GCD(int x,int y)
		{
        	while(z1=x%y)
        	{
        		x=y;
        		y=z1;
        		
        	}
        	return y;
		}
		int LCM(int x,int y)
		{
			z2=x*y/GCD(x,y);
			return z2;
		}
		
	private:
		int z1,z2;
};
int main()
{
	int x, y;
	cin>>x>>y;
	Math aa;
	aa.Print(x,y);
	return 0;
}
