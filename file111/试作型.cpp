/*#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, remainder;

    cout << "������һ��3λʮ����������";
    cin >> num;

    // �����λ����֮��
    remainder = num % 10; // ��ȡ��λ��
    sum += remainder;
    num /= 10;

    remainder = num % 10; // ��ȡʮλ��
    sum += remainder;
    num /= 10;

    remainder = num % 10; // ��ȡ��λ��
    sum += remainder;

    cout << "��λ����֮��Ϊ��" << sum << endl;

    return 0;
}*/
/*#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, j;
    int flag, count;
    int result[MAX_SIZE]; // �洢ֻ�������ε���
    int rsize = 0; // result ����Ĵ�С

    printf("�����������ĸ�����");
    scanf("%d", &n);

    printf("������������");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // �ҳ�ֻ�������ε���
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = i + 1; j < n; j++) { // �� i+1 ��ʼ�����������ظ�����
            if(arr[i] == arr[j]) {
                count++;
                //arr[j] = -1; // ����Ѿ��������ε���
            }
        }
        if(count >= 1) {
            result[rsize] = arr[i]; // �洢ֻ�������ε���
            rsize++;
        }
    }
    int cou = 0;
	int a = 0;
    for(i = 0; i < rsize; i++){
    	for(j = 0; j < rsize; j++){
    		if(i==j) continue;
    		if(result[i]==result[j]){
    			cou++;
    			break;
    		}
    	}
    	if(cou == 0){
       	printf("%d ",result[i]);
        a++;
		}
		else
    	cou=0;
    }
    	if(a == 0)
    	printf("error");
    
    return 0;
}*/

/*#include <iostream>
using namespace std;

#define MAX_SIZE 100

int main() {
    int arr[MAX_SIZE];
    int n, i, j;
    int flag, count;
    int result[MAX_SIZE]; // �洢ֻ�������ε���
    int rsize = 0; // result ����Ĵ�С

    cout << "�����������ĸ�����";
    cin >> n;

    cout << "������������";
    for(i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // �ҳ�ֻ�������ε���
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = i + 1; j < n; j++) { // �� i+1 ��ʼ�����������ظ�����
            if(arr[i] == arr[j]) {
                count++;
                //arr[j] = -1; // ����Ѿ��������ε���
            }
        }
        if(count >= 1) {
            result[rsize] = arr[i]; // �洢ֻ�������ε���
            rsize++;
        }
    }
    int cou = 0;
    int a = 0;
    for(i = 0; i < rsize; i++){
        for(j = 0; j < rsize; j++){
            if(i==j) continue;
            if(result[i]==result[j]){
                cou++;
                break;
            }
        }
        if(cou == 0){
            cout << result[i] << " ";
            a++;
        }
        else
            cou=0;
    }
    if(a == 0)
        cout << "error";

    return 0;
}*/

/*#include<stdio.h>
#include<math.h>
long int mygcd(long int a,long int b);
void simplify(long int *up,long int *down,long int gcd);
int main()
{
     int N;
     scanf("%d",&N);
     long int up[N],down[N];     
     for(int i=0;i<N;i++)    //������ӡ���ĸ 
     {
         scanf("%ld/%ld",&up[i],&down[i]);
     }
     long int gcd;
     long int up1 = up[0]; 
     long int down1 = down[0];    
     simplify(&up1, &down1, mygcd(up1,down1));
     for(int i=1; i<N;i++) 
     {
         if(up1!=0)    //ǰi-1��Ͳ�Ϊ0ʱ 
         {
             long int temp;
             simplify(&up1, &down1, mygcd(up1,down1));     //��ǰi-1��ͽ��л��� 
             gcd = mygcd(down1,down[i]);        //��ǰi-1��͵ķ�ĸ���i���ĸ�����Լ�� 
             temp = down1;
             down1 = down1*down[i]/gcd;        //��ǰi-1��͵ķ�ĸ���i���ĸ����С������
             up1 *= down1/temp;        //���ӷ�ĸͬʱ�Ŵ� 
             up[i] *= down1/down[i];
             up1 += up[i];
         }
         else        //ǰi-1���Ϊ0 
         {
             down1 = down[i];
             up1 = up[i];
        }
     }
     simplify(&up1, &down1, mygcd(up1,down1));    //�����һ�μ��������л���
     if(up1==0)        //��ӡ��� 
     {
         printf("0");
     }
     else if(up1/down1==0)
     {
         printf("%ld/%ld",up1,down1);
     }
     else if(up1%down1==0)
     {
         printf("%ld",up1/down1);
     }
   else
     {
         printf("%ld %ld/%ld",up1/down1,up1%down1,down1);
     }
     return 0;
 }
 
 long int mygcd(long int a,long int b)    //�������Լ�� 
 {
     a = fabs(a);    //����aΪ���� 
     long int r;
     do
     {
         r = a%b;
         a = b;
         b = r;
     }while(r!=0);
    return a;
 }
 
 void simplify(long int *up,long int *down,long int gcd)    //�������� 
 {
     *up /= gcd;
     *down /= gcd;
 }*/
 
 
/*#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidEmail(char email[]) {
    int len = strlen(email);
    int atPos = -1, dotPos = -1;

    // ɨ���ַ������ж�@��.��λ��
    for (int i = 0; i < len; i++) {
        char c = email[i];
        if (c == '@') {
            if (atPos != -1) {
                return 0; // ���@���Ƿ�
            }
            atPos = i;
        } else if (c == '.') {
            if (dotPos != -1) {
                return 0; // ���.���Ƿ�
            }
            if (i == atPos + 1 || i == len - 1) {
                return 0; // .����@�󣬻�����ĩλ���Ƿ�
            }
            dotPos = i;
        } else if (!isalnum(c) && c != '_' && c != '-') {
            return 0; // �Ƿ��ַ����Ƿ�
        }
    }

    // ���@��.��λ��
    if (atPos == -1 || dotPos == -1 || atPos > dotPos) {
        return 0; // ȱ��@��.�������ǵ�λ�ò��ԣ��Ƿ�
    }

    return 1; // �Ϸ�
}

int main() {
    char input[100];
    printf("����������ʼ���ַ��");
    fgets(input, 100, stdin);
    // ȥ���ַ����еĻ��з�
    input[strcspn(input, "\n")] = 0;

    if (isValidEmail(input)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}*/

/*#include <iostream>
#include <string>
#include <cctype>

using namespace std;

class EmailValidator {
public:
    EmailValidator() {}

    bool isValidEmail(const string& email) {
        int len = email.length();
        int atPos = -1, dotPos = -1;

        // ɨ���ַ������ж�@��.��λ��
        for (int i = 0; i < len; i++) {
            char c = email[i];
            if (c == '@') {
                if (atPos != -1) {
                    return false; // ���@���Ƿ�
                }
                atPos = i;
            } else if (c == '.') {
                if (dotPos != -1) {
                    return false; // ���.���Ƿ�
                }
                if (i == atPos + 1 || i == len - 1) {
                    return false; // .����@�󣬻�����ĩλ���Ƿ�
                }
                dotPos = i;
            } else if (!isalnum(c) && c != '_' && c != '-') {
                return false; // �Ƿ��ַ����Ƿ�
            }
        }

        // ���@��.��λ��
        if (atPos == -1 || dotPos == -1 || atPos > dotPos) {
            return false; // ȱ��@��.�������ǵ�λ�ò��ԣ��Ƿ�
        }

        return true; // �Ϸ�
    }
};

int main() {
    EmailValidator validator;
    string input;

    cout << "����������ʼ���ַ��";
    getline(cin, input);

    if (validator.isValidEmail(input)) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}*/


#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt[26] = {0}; // ��¼ÿ����ĸ���ֵĴ���
    int n = s.length();

    for (int i = 0; i < n; i++) {
        cnt[s[i] - 'a']++;
    }

    sort(cnt, cnt + 26, greater<int>()); // �������Ӵ�С����

    int ans = 0;
    int weight = 26;

    for (int i = 0; i < 26 && cnt[i]; i++) {
        ans += cnt[i] * weight--;
    }

    cout << ans << endl;

    return 0;
}

/*#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<cmath>
using namespace std;
int gcd(int a, int b){   // �����Լ��
    if(b == 0) return a;
    return gcd(b, a % b);
}
int main(){
    int n;
    cout<<"�������������"; 
    cin>>n;
    int fz[n], fm[n];
    for(int i=0;i<n;i++){
        scanf("%d/%d",&fz[i],&fm[i]);
        if(fm[i] == 0){  // �жϷ�ĸ�Ƿ�Ϊ0
            cout<<"error"<<endl;
            return 0;
        }
    }
    int sum_fz = fz[0], sum_fm = fm[0];
    for(int i=1;i<n;i++){
        int tmp_fm = fm[i] * sum_fm / gcd(fm[i], sum_fm);
        int tmp_fz1 = (tmp_fm * fz[i] )/ fm[i] ;
        int tmp_fz2 = (tmp_fm *sum_fz)/ sum_fm;
        sum_fz = tmp_fz1 + tmp_fz2;
        sum_fm = tmp_fm;
        int tmp_gcd = abs(gcd(sum_fz, sum_fm));  // �����Լ��
        sum_fz /= tmp_gcd;
        sum_fm /= tmp_gcd;
    }
    if(sum_fm == 1){
        cout<<sum_fz<<endl;  // ��ĸΪ1��ֱ���������
    }else if(sum_fz == 0){
        cout<<"0"<<endl;  // ����Ϊ0�����0
    }else{
        cout<<sum_fz<<"/"<<sum_fm<<endl;  // �������
    }
    return 0;
}*/







