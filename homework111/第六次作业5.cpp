#include<iostream>
#include<cstdio>
using namespace std;
class Numbers{
public:
	Numbers(){
	}
	void numb(char num[8])
	{
		for(i=0;i<7;i++)
		{
			if(num[i]>='a'&&num[i]<='z')
			num[i]-=32;
			if(num[i]>='A'&&num[i]<='C')
			cout<<2;
			if(num[i]>='D'&&num[i]<='F')
			cout<<3;
			if(num[i]>='G'&&num[i]<='I')
			cout<<4;
			if(num[i]>='J'&&num[i]<='L')
			cout<<5;
			if(num[i]>='M'&&num[i]<='O')
			cout<<6;
			if(num[i]>='P'&&num[i]<='S')
			cout<<7;
			if(num[i]>='T'&&num[i]<='V')
			cout<<8;
			if(num[i]>='W'&&num[i]<='Z')
			cout<<9;
		}
	}
private:
	int i;
};
int main()
{
	char num[8]={'/0'};
	scanf("%s",num);
	Numbers aa;
	aa.numb(num);
	return 0;
}
