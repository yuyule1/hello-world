/*#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

class Student{
	public:
		Student(){
		}
		void Setdate(Student &s)
		{
			cin
		}
		shuru()
		{
			
			for(;;)
			{
			}
		}
		string name;
		float pingshi;
		float qimo;
		float zong=0.4*pingshi+0.6*qimo;
};
int main()
{
	string name;
	float pingshi;
	float qimo;
	float zong;
//	getline(cin,str);
    cin>>name;
    cin>>pingshi>>qimo;
    cout<<name<<" ";
    zong=0.4*pingshi+0.6*qimo;
    printf("%.2f %.2f %.2f",pingshi,qimo,zong);
    
	return 0;
} */



//�ṹ�ͱ������岿��
//#include "pch.h"
//#include"out.h"
#include <iostream>
#include<fstream>
#include <string>
#include<iomanip>
#include <fstream>
#include<strstream>
#include <vector>
#include<cstdio>

using   namespace   std;
const int Max = 100;		//ѧ�ź��ַ����Ĵ�С
//����������
class Student;
void setData(Student &s);
void sort(Student S[], int N);
void print(Student &s);
int search(Student S[], int N, char *n);
class Student
{
public:		//������Ĺ��г�Ա
	char number[Max];	//ѧ��
	char name[Max];		//����
	double pingshi;		//ƽʱ�ɼ� 
	double qimo;		//��ĩ�ɼ� 
	double total;		//�ܷ�
	int rank;			//����
};
//����������
int main()
{
	const int M = 3;	//���峣��������Ϊ3λͬѧ
	Student S[M];		//������������
	for (int i = 0; i < M; i++)
	{
		cout << "���������" << i + 1 << "λͬѧ�����ݣ�" << endl;
		setData(S[i]);		//�����������뺯��
		cout << endl;
	}
	sort(S, M);
	int order = 1;
	while (order != 4)
	{
		cout << "****************************����˵�****************************" << endl;
		cout << "1.��ѯ��������" << endl;
		cout << "2.��������һ��ѧ�ţ����Ҹ�ѧ���������Ϳ��Գɼ�" << endl; 
		cout << "3.�˳�ϵͳ" << endl;
		cout << "****************************************************************" << endl;
		cout << "���������";
		cin >> order;
		switch (order)
		{
		case 1:
		{
			for (int j = 0; j < M; j++)
				print(S[j]);	//�����������
		}
		break;
		case 2:
		{
			char code[Max];
			cout << "������Ҫ���ҵ�ѧ�ţ�";
			cin >> code;
			int result = search(S, M, code);
			if (result == -1)
				cout << "�������ѧ�Ų����ڣ�" << endl;
			else
				print(S[result]);
		}
		break;
		case 3:
			break;
		default:
			cout << "�����������������" << endl;
		}
	}
}
//���ܺ�������
void setData(Student &s)
{
	cout << "����ѧ�ţ�������ƽʱ�ɼ�����ĩ�ɼ���";
	cin >> s.number >> s.name >> s.pingshi >> s.qimo ;		//�ֱ���������ݸ�����ĳ�Ա
	//��Ա�ĳ�ʼ��
	s.total = 0.4*s.pingshi+0.6*s.qimo;
	s.rank = 0;
}


void sort(Student S[], int N)		//���뷨����
{
	int index;
	Student inserter;
	for (int i = 1; i < N; i++)		//���αȽ�����ѧ��
	{
		inserter = S[i];		//ȡ��Ԫ��i
		index = i - 1;
		while (index >= 0 && inserter.total > S[index].total)
		{		//��Ԫ�ش��ڵ�i-1��Ԫ��
			S[index + 1] = S[index];
			index--;
		}
		S[index + 1] = inserter;		//����
	}
	for (int j = 0; j < N; j++)
		S[j].rank = j + 1;		//��������
}


void print(Student &s)
{
	cout << "����" << "\t" << "ѧ��" << "\t" << "����" << "\t" << "ƽʱ�ɼ�" << "\t" << "��ĩ�ɼ�"
		<< "\t" << "�ܷ�" << "\t" << endl;
	printf("%d\t%s\t%s\t%.2lf\t\t%.2lf\t\t%.2lf\n",s.rank,s.number,s.name,s.pingshi,s.qimo,s.total);
}

int search(Student S[], int N, char *n)
{
	for (int i = 0; i < N; i++)
	{
		if (strcmp(S[i].number, n) == 0)		//�Ƚ��ַ������n(�û������ѧ��)��ϵͳ��ѧ����ȣ�strcmp(S[i].number, n)ֵΪ0
			return i;		//�����±�
	}
	return -1;
}




