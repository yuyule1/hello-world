#include <iostream>
using namespace std;
class geweihe{
public:
      geweihe(){}
	  int geweihe1(int num){
	  int sum=0;
	  int remainder=0;	    // �����λ����֮��
    remainder = num % 10; // ��ȡ��λ��
    sum += remainder;
    num /= 10;

    remainder = num % 10; // ��ȡʮλ��
    sum += remainder;
    num /= 10;

    remainder = num % 10; // ��ȡ��λ��
    sum += remainder;

	 return sum; }	
};
int main() {
    int num;
    
    cout << "������һ��3λʮ����������";
    cin >> num;
    geweihe xx;

    cout << "��λ����֮��Ϊ��" << xx.geweihe1(num) << endl;

    return 0;
}
