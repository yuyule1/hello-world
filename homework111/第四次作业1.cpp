#include <iostream>
using namespace std;
class geweihe{
public:
      geweihe(){}
	  int geweihe1(int num){
	  int sum=0;
	  int remainder=0;	    // 计算各位数字之和
    remainder = num % 10; // 获取个位数
    sum += remainder;
    num /= 10;

    remainder = num % 10; // 获取十位数
    sum += remainder;
    num /= 10;

    remainder = num % 10; // 获取百位数
    sum += remainder;

	 return sum; }	
};
int main() {
    int num;
    
    cout << "请输入一个3位十进制整数：";
    cin >> num;
    geweihe xx;

    cout << "各位数字之和为：" << xx.geweihe1(num) << endl;

    return 0;
}
