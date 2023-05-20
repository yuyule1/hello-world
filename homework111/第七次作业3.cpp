#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class Binaryf{
public:
	Binaryf(){
	}
	void bi(char *num)
	{
		len=strlen(num);
		cout<<len<<endl;
		for(int i=0;i<len/2;i++)
		{
			t=num[i];
			num[i]=num[len-i-1];
			num[len-i-1]=t;
		}
		cout<<num;
	}
private:
	int len;
	int t;
};
int main()
{
	char num[33];
	cin>>num;
    Binaryf aa;
    aa.bi(num);
	return 0;
}
