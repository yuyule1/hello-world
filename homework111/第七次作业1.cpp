#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class wordlen{
public:
	wordlen(){
	}
	void length(char *a)
	{
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			if(a[i]==' '||a[i]=='.')
			{
				l2=i;
				t=l2;
				cout<<l2-l1<<" ";
				l1=t+1;
			}
			
		}
	}
private:
	int i,t;
	int len;
	int l1=0,l2=0;
};
int main()
{
	char a[100]="\0";
	gets(a);
	wordlen aa;
	aa.length(a);
	return 0;
}
