#include<iostream>
#include<cstdio>
using namespace std;
class yuan{
	public:
		yuan(int n)
		{
			printf("ֱ��=%d\n",2*n);
			zhouchang(n);
			mianji(n);
		}
		void zhouchang(int n)
		{
			printf("�ܳ�=%.2lf\n",3.14*2*n);
		}
		void mianji(int n)
		{
			printf("���=%.2lf\n",3.14*n*n);
		}
};
int main()
{
	int n;
	scanf("%d",&n);
	yuan aa(n);

}
