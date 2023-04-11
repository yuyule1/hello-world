#include<iostream>
#include<cstdio>
using namespace std;
class jjzh
{
	public:
		jjzh(){
		}
		void Print(int num)
		{
			int i;
			int zu[5]={0};
			for(i=0;(num+7)/8>0;i++)
			{
				zu[i]=num%8;
				num=num/8; 
			}
			for(i=4;i>=0;i--)
			{
				printf("%d",zu[i]); 
			}
		}
};
int main()
{
	int num;
	cin>>num;
    jjzh aa;
    aa.Print(num);
	return 0;
}
