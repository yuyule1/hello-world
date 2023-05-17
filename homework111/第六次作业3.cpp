#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class StrCmp{
public:
	StrCmp(){
	}
	void findstr1(const char* a,const char* b)
	{
	int lena = strlen(a);
	int lenb = strlen(b);
	for(i=0;i<lenb;i++)
	{
		if(co>=1)
		{
			co--;
		}
		else
		{
		count=0;
		if(b[i]==a[0])
		{
			for(j=1;j<lena;j++)
			{
				if(b[i+j]!=a[j])
				{
				count=1;
				break;	
				}
				else
				count+=0;
			}
			if(count==0)
			{
			cout<<i<<" "<<i+lena-1<<endl;
			co=lena-1;
			cout1++;
			}
		}
	    }
	}
	if(cout1==0)
	cout<<"-1"<<endl;
	}
private:
	int i,j,count=0,co=0,cout1=0;
};
int main()
{
	string str1,str2;
    getline(cin,str1);
    const char *a=str1.c_str();
    getline(cin,str2);
    const char *b=str2.c_str();
   	StrCmp aa;
	aa.findstr1(a,b);
	return 0;
}









