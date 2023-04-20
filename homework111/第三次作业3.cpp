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



//结构和变量定义部分
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
const int Max = 100;		//学号和字符串的大小
//函数的声明
class Student;
void setData(Student &s);
void sort(Student S[], int N);
void print(Student &s);
int search(Student S[], int N, char *n);
class Student
{
public:		//定义类的公有成员
	char number[Max];	//学号
	char name[Max];		//姓名
	double pingshi;		//平时成绩 
	double qimo;		//期末成绩 
	double total;		//总分
	int rank;			//排名
};
//主函数部分
int main()
{
	const int M = 3;	//定义常量，假设为3位同学
	Student S[M];		//创建对象数组
	for (int i = 0; i < M; i++)
	{
		cout << "输入下面第" << i + 1 << "位同学的数据：" << endl;
		setData(S[i]);		//调用数据输入函数
		cout << endl;
	}
	sort(S, M);
	int order = 1;
	while (order != 4)
	{
		cout << "****************************命令菜单****************************" << endl;
		cout << "1.查询所有排名" << endl;
		cout << "2.任意输入一个学号，查找该学生的排名和考试成绩" << endl; 
		cout << "3.退出系统" << endl;
		cout << "****************************************************************" << endl;
		cout << "请输入命令：";
		cin >> order;
		switch (order)
		{
		case 1:
		{
			for (int j = 0; j < M; j++)
				print(S[j]);	//输出对象数组
		}
		break;
		case 2:
		{
			char code[Max];
			cout << "输入您要查找的学号：";
			cin >> code;
			int result = search(S, M, code);
			if (result == -1)
				cout << "您输入的学号不存在！" << endl;
			else
				print(S[result]);
		}
		break;
		case 3:
			break;
		default:
			cout << "输入错误，请重新输入" << endl;
		}
	}
}
//功能函数部分
void setData(Student &s)
{
	cout << "输入学号，姓名，平时成绩，期末成绩：";
	cin >> s.number >> s.name >> s.pingshi >> s.qimo ;		//分别将输入的数据赋给类的成员
	//成员的初始化
	s.total = 0.4*s.pingshi+0.6*s.qimo;
	s.rank = 0;
}


void sort(Student S[], int N)		//插入法排序
{
	int index;
	Student inserter;
	for (int i = 1; i < N; i++)		//依次比较所有学生
	{
		inserter = S[i];		//取出元素i
		index = i - 1;
		while (index >= 0 && inserter.total > S[index].total)
		{		//该元素大于第i-1个元素
			S[index + 1] = S[index];
			index--;
		}
		S[index + 1] = inserter;		//插入
	}
	for (int j = 0; j < N; j++)
		S[j].rank = j + 1;		//设置排名
}


void print(Student &s)
{
	cout << "排名" << "\t" << "学号" << "\t" << "姓名" << "\t" << "平时成绩" << "\t" << "期末成绩"
		<< "\t" << "总分" << "\t" << endl;
	printf("%d\t%s\t%s\t%.2lf\t\t%.2lf\t\t%.2lf\n",s.rank,s.number,s.name,s.pingshi,s.qimo,s.total);
}

int search(Student S[], int N, char *n)
{
	for (int i = 0; i < N; i++)
	{
		if (strcmp(S[i].number, n) == 0)		//比较字符，如果n(用户输入的学号)与系统中学号相等，strcmp(S[i].number, n)值为0
			return i;		//返回下标
	}
	return -1;
}




