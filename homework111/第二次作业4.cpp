#include<iostream>
#include<cstdio>
using namespace std;
class zhuanhuan
{
	public:
		zhuanhuan(){
		}
		void PrintDay(int y,int m,int d)
		{
			if(m==1||m==2)
			{
				m+=12;
				y--; 
			}
			W= (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
			Switch(W);
		}
		void Switch(int W)
		{
			switch(W) 
    {
    	case 0:printf("Sunday");break;
        case 1:printf("Monday");break;
        case 2:printf("Tuesday");break;
        case 3:printf("Wednesday");break;
        case 4:printf("Thursday");break;
        case 5:printf("Friday");break;
        case 6:printf("Saturday");break;
        default:break;
    }
		}
	private:
		int W; 
};

int main()
{
	int y,m,d;
    scanf("%d-%d-%d",&y,&m,&d);
    zhuanhuan aa;
    aa.PrintDay(y,m,d);
    return 0;
}
