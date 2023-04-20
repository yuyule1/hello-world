#include<iostream>
#include<cstdio>
using namespace std;
class seasonchg{
	public:
		seasonchg(int n){
			Switch(n);
		}
		void Switch(int n)
		{
			switch(n)
			{
			
			case 1:
			cout<<"Spring"<<endl;
			break;
			case 2:
			cout<<"Summer"<<endl;
			break;
			case 3:
			cout<<"Fall"<<endl;
			break;
			case 4:
			cout<<"Winter"<<endl;
			break;
			default:
			cout<<"error"<<endl;break;
		    }
		}
};
int main()
{
	int n;
	cin>>n;
	seasonchg aa(n);
   
	return 0;
}
