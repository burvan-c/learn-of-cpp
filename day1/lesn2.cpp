#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>;
using namespace std;
#include<string>
#include<stdio.h>


//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct stu s1;
//	//struct stu s1={"����",18,100};
//	//����ṹ��ʱֱ�ӳ�ʼ��
//	s1.name = "����";
//	s1.age = 18;
//	s1.score = 100;
//	cout << "������" << s1.name << "��ͣ�" << s1.age << "������" << s1.score;
//
//
//	system("pause");
//	return 0;
//}



//�ṹ������
//struct  �ṹ����   ��������Ԫ�ظ�����={{}��{}��������}
// 
//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	//�ṹ�������ʼ��
//	struct stu stary[3] =
//	{
//		{"����",10,100},
//		{"����",14,95},
//		{"����",20,30},
//	};
//
//	//�ṹ������Ԫ�����¸�ֵ
//	stary[2].name = "����";
//	stary[2].age = 60;
//	stary[2].score = 66;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << stary[i].name <<"\t"<< stary[i].age << "\t" << stary[i].score;
//		cout << endl;
//	}
//
//
//
//
//	system("pause");
//	return 0;
//}



////�ṹ��ָ��
//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct stu s1={"����",18,100};
//	stu* p = &s1;
//	cout << p->name << '\t' << p->age << "\t" << p->score << endl;
//	//�ü�ͷ����ָ���Ա
//	system("pause");
//	return 0;
//}



////Ƕ�׽ṹ��
//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//struct tea
//{
//	int id;
//	string name;
//	int age;
//	struct stu s1;
//};
//
//int main()
//{
//	tea t;
//	t.age = 200;
//	t.id = 123456;
//	t.name = "��ɵ";
//	t.s1.age = 10;
//	t.s1.name= "��ɵ";
//	t.s1.score = 100;
//	cout << t.age << "\t" << t.id << "\t" << t.name << endl << t.s1.age << "\t" << t.s1.name << "\t" << t.s1.score << endl;
//	system("pause");
//	return 0;
//}



//�ṹ�庯��
struct stu
{
	string name;
	int age;
	int score;
};
void printstudent(struct stu*ps)//����const��Ͳ��ɸ�����
{
	ps->name = "����";
	cout << ps->name << "\t" << ps->age << "\t" << ps->score << endl;
}
//����������ֵ����,���ú����ı�name age scoreʱ,������s1���䣨�ڲ�ͬ�Ĵ洢�����ڣ�
//���������õ�ַ���ݣ����ú����ı�name age scoreʱ������Ҳ��仯
int main()
{
	struct stu s1 = { "����",18,100 };
	printstudent(&s1);
	cout << s1.name << "\t" << s1.age << "\t" << s1.score << endl;
	system("pause");
	return 0;
}