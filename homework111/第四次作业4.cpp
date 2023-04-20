#include<iostream>
#include<cstdio>
using namespace std;
class scorechg{
	public:
		scorechg(int n){
			Switch(n);
		}
		void Switch(int n)
		{
			if(n>=90)
			cout<<"A"<<endl;
			else if(n>=80)
			cout<<"B"<<endl;
			else if(n>=70)
			cout<<"C"<<endl;
			else if(n>=60)
			cout<<"D"<<endl;
			else if(n<60)
			cout<<"E"<<endl;
		}
};
int main()
{
	int n;
	cin>>n;
	scorechg aa(n);
   
	return 0;
}
