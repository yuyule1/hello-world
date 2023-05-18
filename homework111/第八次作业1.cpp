#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class StrStr{
public:
    StrStr(){
    }	
    int mystrstr(char a[],char b[])
	{
		lena=strlen(a);
		lenb=strlen(b);
		for(i=0;i<lena;i++)
		{
			if(a[i]==b[0])
			{
				jud=0;
				for(j=1;j<lenb;j++)
				{
					if(a[i+j]!=b[j])
					{
						jud=1;
						break;
					}
				}
				if(jud==0)
				{
					judg=1;
					cout<<i<<endl;
					break;
				}
			}
		}
		if(judg==0)
		cout<<"-1";
		return 0;
	}
private:
	int lena,lenb;
	int i,j;
	int jud=0,judg=0;
};
int main()
{
	char a[501],b[501];
	cin>>a;
	cin>>b;
	StrStr aa;
	aa.mystrstr(a,b);
	return 0;
}
