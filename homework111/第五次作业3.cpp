#include<iostream>
#include<stdio.h>
class Fenshu{
	public:
		Fenshu(){
		}
		void swap(int a, int b)
		{

		
			for (i = 0; i < 200; i++) {
				if (a != 0) {
		
					c = a * 10 / b;
					printf("%d", c);
					a = a * 10 % b;
		
				}
		
			}
		}

	private:
		int c,i;
};
int main() {
	int a, b;
	scanf("%d/%d", &a, &b);
	printf("0.");
	Fenshu aa;
	aa.swap(a, b);
	return 0;
}
