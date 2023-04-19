#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
class math{
	public:
		math(){
		}
};
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int n1,n2,n3,n4,n5,n6;
		scanf("%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6);
		double sum=n1+n2+n3+n4+n5+n6;
		double mean=(sum/6);
		double variance=((n1-mean)*(n1-mean)+(n2-mean)*(n2-mean)+(n3-mean)*(n3-mean)+(n4-mean)*(n4-mean)+(n5-mean)*(n5-mean)+(n6-mean)*(n6-mean))/6;
        printf("%.2lf  %.2lf\n",mean,variance);
	}
	return 0;
} 


