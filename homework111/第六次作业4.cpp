#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
class Miyao{
public:
	Miyao(){
	}
private:
};
int main()
{
//	string S,S1;
//	getline(cin,S);
//	int len=S.length();
//	const char* S1 = S.c_str();
	char S[100]={'/0'};
	char S1[100]={'/0'};
	cin>>S;
	int len=strlen(S);
	int K;
	cin>>K;
	int i,count=0;
	for(i=0;i<len;i++)
	{
		if(i+count>=len)
		break;
	    else if(S[i+count]!='-')
	    {
	    	S1[i]=S[i+count];
	    }
	    else if(S[i+count]=='-')
	    {
	    	count++;
	    	S1[i]=S[i+count];
	    }
	}
	int len1=len-count;
	int count1=0,x=0;
	for(i=len1-1;i>=0;i--)
	{
		count1=len1%K;
	}
	for(i=0;;i++)
	{
		if(S1[i]>='a'&&S1[i]<='z')
		S1[i]-=32;
		cout<<S1[i];
		if(S1[i]==S1[len1-1])
		{
			break;
		}
		if(i==count1-1&&x==0)
		{
			cout<<"-";
			x=1;
		}
		else if(i==count1-1+K)
		{
			cout<<"-";
			count1+=K;
		}

	}
}
