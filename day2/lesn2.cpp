#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include<string>


//��Ͷ���

//��װ
//class ����{����Ȩ�ޣ�����/��Ϊ};
// 
//���һ��Բ�࣬��Բ���ܳ�
const double PI = 3.14;
class Circle
{
	//����Ȩ��
public://����Ȩ��

	//����
	int r;

	//��Ϊ
	double cal()
	{
		return 2 * PI * r;
	}
};

class Student
{
public://����Ȩ��
	//�������Ժ���Ϊ ͳһ��Ϊ��Ա
	//����  ��Ա���� ��Ա����
	//��Ϊ  ��Ա���� ��Ա����

	//����
	string name;
	int id;

	//��Ϊ
	void showStudent()
	{
		cout << "������" << name <<"\t" << "ѧ�ţ�" << id << endl;
	}

	//��������ֵ
	void setname(string m_name)
	{
		name = m_name;
	}
};
int main()
{
	//ͨ��Բ�࣬���������Բ������
	Circle c1;
	//��Բ��������Խ��и�ֵ
	c1.r = 10;
	cout << "Բ�ܳ���" << c1.cal() << endl;



	//����һ�������ѧ��
	Student s1;
	s1.setname("zhangsan");
	s1.id = 12;
	s1.showStudent();


	Student s2;
	s1.name = "lisi";
	s1.id = 15;
	s1.showStudent();



	system("pause");
	return 0;
}

