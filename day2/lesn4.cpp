//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once

//#include<iostream>
//using namespace std;
//#include<string>


////��ʼ���б�
////���캯��():����1��ֵ��,����2����,...{}
//class Person
//{
//public:
//	////��ͳ��ʼ������
//	//Person(int a, int b, int c)
//	//{
//	//	m_a = a;
//	//	m_b = b;
//	//	m_c = c;
//	//}
//
//	//��ʼ���б��ʼ������
//	Person(int a,int b,int c) :m_a(a), m_b(b), m_c(c)
//	{
//
//	}
//	int m_a;
//	int m_b;
//	int m_c;
//};
//void test01()
//{
//	//Person p(10, 20, 30);
//	Person p(30,20,10);
//	cout << p.m_a << endl << p.m_b << endl << p.m_c << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//�������Ϊ���Ա
//���г�Ա����һ����Ķ���

//class A {};
//class B
//{
//	A a;// �����Ա
//};

//class Phone
//{
//public:
//	Phone(string pname)
//	{
//		cout << "Phone�Ĺ��캯������" << endl;
//		m_pname = pname;
//	}
//	~Phone()
//	{
//		cout << "Phone��������������" << endl;
//	}
//	string m_pname;
//};
//class Person
//{
//public:
//	Person(string name, string pname):m_name(name),m_phone(pname)
//	{
//		cout << "Person�Ĺ��캯������" << endl;
//	}
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//
//	string m_name;
//	Phone m_phone;
//};
////�������������Ϊ��������ȹ���������ٹ����������������������������
//void test01()
//{
//	Person p("zhangsan", "pingguomax");
//	cout << p.m_name << "��" << p.m_phone.m_pname << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//��̬��Ա--��̬��Ա��������̬��Ա����
//��̬��Ա����:1.���ж�����һ������ 2.�ٱ���׶η����ڴ� 3.���������������ʼ��
//��̬��Ա������1.���ж�����ͬһ������ 2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

//class Person
//{
//public:
//	static int m_a; 
//	//��̬��Ա�����з���Ȩ��
//private:
//	static int m_b;
//};
//int Person::m_a = 100;
//int Person::m_b = 200;
//
//
//void test01()
//{
//	Person p;
//	cout << p.m_a << endl;
//
//	Person p2;
//	p2.m_a = 200;             //m_a�ǹ������ݣ�p2��Ϊ200�󣬴���õ�����200
//	cout << p.m_a << endl;
//}
//
//void test02()
//{
//	//��̬��Ա������������ĳ���������ж�����ͬһ������
//	//��̬��Ա�������ַ��ʷ�ʽ
//
//	//1.ͨ���������
//	Person p;
//	cout << p.m_a << endl;
//
//	//2.ͨ����������
//	cout << Person::m_a << endl;
//	//cout << Person::m_b << endl;//private���ⲻ�ɷ���
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}




//��̬��Ա������1.���ж�����ͬһ������ 2.��̬��Ա����ֻ�ܷ��ʾ�̬��Ա����

//class Person
//{
//public:
//	//��̬��Ա����
//	static void func()
//	{
//		m_a = 120;
//		//m_b=200;//���ɷ��ʷǾ�̬��Ա����
//		cout << "static void func����" << endl;
//	}
//	static int m_a;
//	int m_b;
//
//	//��̬��Ա����Ҳ�з���Ȩ��
//private:
//	static void func2()
//	{
//		cout << "static void func2����" << endl;
//
//	}
//};
//int Person::m_a = 0;
//
//void test01()
//{
//	//1.ͨ��������з���
//	Person p;
//	p.func();
//
//	//2.ͨ����������
//	Person::func();
//
//
//
//	//Person::func2();//private���ⲻ�ɷ���
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}