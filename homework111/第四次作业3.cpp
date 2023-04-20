#include<iostream>
#include<cstdio>
using namespace std;
class agechg{
	public:
		agechg(int n){
			Switch(n);
		}
		void Switch(int n)
		{
			if(n>=1&&n<=10)
			cout<<"Children"<<endl;
			else if(n>=11&&n<=20)
			cout<<"Teenagers"<<endl;
			else if(n>=21&&n<=40)
			cout<<"Youth"<<endl;
			else if(n>=41&&n<=50)
			cout<<"Middle-aged"<<endl;
			else if(n>=51&&n<=80)
			cout<<"Elderly"<<endl;
			else if(n>=81&&n<=100)
			cout<<"Old man"<<endl;
		}
};
int main()
{
	int n;
	cin>>n;
	agechg aa(n);
   
	return 0;
}
