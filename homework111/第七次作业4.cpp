#include<iostream>
#include<cstdio>
using namespace std;
//��ŵ�������ǽ����⻯��Ϊ���򵥵����⡣������Ҫ�� A��B Ųn��n>=2������ʱ��
//��Ӧ���Ȱ�����n-1��Ų��C�ϣ�Ȼ���ٰѵ�n��Ų��B�ϣ��ٰ�C�ϵ�n-1��Ų��B
//���Է��������б߽�ģ���n==1ʱֱ���ƶ��Ϳ����ˡ���������ֱ���ҳ�һ��Ųn���ķ����Ϳ����ˣ�Ȼ����ñ߽硣

void han(int n, char A, char B, char C){   //��n��Բ��ͨ��B ��A�ƶ���C
	if (n == 1)	printf("Move disk %d from %c to %c\n", n, A, C); //����n��Բ��ֱ�Ӵ�A�ƶ���C
	else{
		han(n - 1, A, C, B);//��n-1��Բ��ͨ��C ��A�ƶ���B
		printf("Move disk %d from %c to %c\n", n, A, C);  //����n��Բ��ֱ�Ӵ�A�ƶ���C
		han(n - 1, B, A, C);//��n-1��Բ��ͨ��A ��B�ƶ���C
	}
}

int main(){
	int n;
	cin>>n;
	han(n, 'A', 'B', 'C');
	return 0;
}


