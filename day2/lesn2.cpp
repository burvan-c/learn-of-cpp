//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//#include<iostream>
//using namespace std;
//#include<string>


////��Ͷ���
//
////��װ
////class ����{����Ȩ�ޣ�����/��Ϊ};
//// 
////���һ��Բ�࣬��Բ���ܳ�
//const double PI = 3.14;
//class Circle
//{
//	//����Ȩ��
//public://����Ȩ��
//
//	//����
//	int r;
//
//	//��Ϊ
//	double cal()
//	{
//		return 2 * PI * r;
//	}
//};
//
//class Student
//{
//public://����Ȩ��
//	//�������Ժ���Ϊ ͳһ��Ϊ��Ա
//	//����  ��Ա���� ��Ա����
//	//��Ϊ  ��Ա���� ��Ա����
//
//	//����
//	string name;
//	int id;
//
//	//��Ϊ
//	void showStudent()
//	{
//		cout << "������" << name <<"\t" << "ѧ�ţ�" << id << endl;
//	}
//
//	//��������ֵ
//	void setname(string m_name)
//	{
//		name = m_name;
//	}
//};
//int main()
//{
//	//ͨ��Բ�࣬���������Բ������
//	Circle c1;
//	//��Բ��������Խ��и�ֵ
//	c1.r = 10;
//	cout << "Բ�ܳ���" << c1.cal() << endl;
//
//
//
//	//����һ�������ѧ��
//	Student s1;
//	s1.setname("zhangsan");
//	s1.id = 12;
//	s1.showStudent();
//
//
//	Student s2;
//	s1.name = "lisi";
//	s1.id = 15;
//	s1.showStudent();
//
//
//
//	system("pause");
//	return 0;
//}



////��װ����Ȩ�ޣ�����Ȩ�ޡ�����Ȩ�ޡ�˽��Ȩ��
////public  �������ⶼ���Է���
////protected  ���ڿ��Է��ʣ����ⲻ���Է���
////private    ���ڿ��Է��ʣ����ⲻ���Է���
//class Person
//{
//public:
//	//����Ȩ��
//	string m_name;
//
//protected:
//	//����Ȩ��
//	string m_car;
//
//private:
//	//˽��Ȩ��
//	int m_password;
//
//public:
//	void func()
//	{
//		m_car = "yuolaji";//����Ȩ�����ڷ���
//		m_password = 123456;//˽��Ȩ�����ڷ���
//	}
//	
//};
//int main()
//{
//	Person p1;
//	p1.m_name = "zhangsan";
//	p1.func();
//	cout << p1.m_name << endl;
//
//	system("pause");
//	return 0;
//}



////struct��class������Ĭ�Ϸ���Ȩ�޲�ͬ
////struct    Ĭ�Ϸ���Ȩ��Ϊ����
////class     Ĭ�Ϸ���Ȩ��Ϊ˽��
//class C1
//{
//	int m_a;//Ĭ�Ϸ���Ȩ��Ϊ˽��
//};
//struct C2
//{
//	int m_a;//Ĭ�Ϸ���Ȩ��Ϊ����
//};
//int main()
//{
//	C1 c1;
//	//c1.m_a;//���ﱨ���޷�����
//	C2 c2;
//	c2.m_a;//������Է���
//
//	system("pause");
//	return 0;
//}



////��Ա����˽�л�--�Լ����ƶ�дȨ�ޣ�����д���Լ�����ݵ���Ч��
//class Person
//{
//public:
//	//��������
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	//��ȡ����
//	string getname()
//	{
//		return m_name;
//	}
//
//	//��������
//	void setage(int age)
//	{
//		if (age < 0 || 150 < age)
//		{
//			m_age = 0;
//			cout << "��������" << endl;
//			return;//�˳��������
//		}
//		m_age = age;
//	}
//
//	//��ȡ����
//	int getage()
//	{
//		//m_age = 20;
//		return m_age;
//	}
//
//	//��������
//	void setlover(string lover)
//	{
//		m_lover = lover;
//	}
//
//private:
//	string m_name;//�ɶ���д
//	int m_age;//ֻ��=>�ɶ���д
//	string m_lover;//ֻд
//};
//int main()
//{
//	Person p;
//	p.setname("zhangsan");
//	cout << p.getname() << endl;
//
//	p.setage(200);
//	cout << p.getage() << endl;
//
//	p.setlover("lisi");
//
//	system("pause");
//	return 0;
//}