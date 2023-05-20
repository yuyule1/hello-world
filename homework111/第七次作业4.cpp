#include<iostream>
#include<cstdio>
using namespace std;
//汉诺塔问题是将问题化简为更简单的问题。当你需要从 A到B 挪n（n>=2）个的时候，
//你应该先把上面n-1个挪到C上，然后再把第n个挪到B上，再把C上的n-1个挪回B
//可以发现这是有边界的，当n==1时直接移动就可以了。所以我们直接找出一个挪n个的方法就可以了，然后处理好边界。

void han(int n, char A, char B, char C){   //将n个圆盘通过B 从A移动到C
	if (n == 1)	printf("Move disk %d from %c to %c\n", n, A, C); //将第n个圆盘直接从A移动到C
	else{
		han(n - 1, A, C, B);//将n-1个圆盘通过C 从A移动到B
		printf("Move disk %d from %c to %c\n", n, A, C);  //将第n个圆盘直接从A移动到C
		han(n - 1, B, A, C);//将n-1个圆盘通过A 从B移动到C
	}
}

int main(){
	int n;
	cin>>n;
	han(n, 'A', 'B', 'C');
	return 0;
}


