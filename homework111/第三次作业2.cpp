#include<iostream>
#include<cstdio>
using namespace std;
class yuan{
	public:
		yuan(int n)
		{
			printf("直径=%d\n",2*n);
			zhouchang(n);
			mianji(n);
		}
		void zhouchang(int n)
		{
			printf("周长=%.2lf\n",3.14*2*n);
		}
		void mianji(int n)
		{
			printf("面积=%.2lf\n",3.14*n*n);
		}
};
int main()
{
	int n;
	scanf("%d",&n);
	yuan aa(n);

}
