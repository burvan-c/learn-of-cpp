//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once

#include<iostream>
using namespace std;


//�̳�

//class java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ����롢ע�ᡭ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ����" << endl;
//	}
//	void left()
//	{
//		cout << "c++��python��java����"<<endl;
//	}
//	void content()
//	{
//		cout << "java��Ƶ" << endl;
//	}
//};
//class python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ����롢ע�ᡭ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ����" << endl;
//	}
//	void left()
//	{
//		cout << "c++��python��java����" << endl;
//	}
//	void content()
//	{
//		cout << "pytnon��Ƶ" << endl;
//	}
//};
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ����롢ע�ᡭ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ����" << endl;
//	}
//	void left()
//	{
//		cout << "c++��python��java����" << endl;
//	}
//	void content()
//	{
//		cout << "c++��Ƶ" << endl;
//	}
//};


//�̳�ʵ��ҳ��

//class basepage//����ҳ����
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ����롢ע�ᡭ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ����" << endl;
//	}
//	void left()
//	{
//		cout << "c++��python��java����" << endl;
//	}
//};
//
////�̳п��Լ����ظ�����
////�﷨��class ���� ���̳з�ʽ ����
////����Ҳ�������࣬����Ҳ�л���
//
//class java :public basepage
//{
//public:
//	void content()
//	{
//		cout << "java��Ƶ" << endl;
//	}
//};
//class python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "python��Ƶ" << endl;
//	}
//};
//class cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "cpp��Ƶ" << endl;
//	}
//};
//void test01()
//{
//	cout << "javaѧϰҳ��" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "-----------------------" << endl;
//
//	cout << "pythonѧϰҳ��" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "-----------------------" << endl;
//
//	cout << "c++ѧϰҳ��" << endl;
//	cpp cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



////�̳з�ʽ--�����̳С������̳С�˽�м̳�
//
////�����̳�
//class base1
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son1 :public base1
//{
//public:
//	void func()
//	{
//		m_a = 10;//�����еĹ���Ȩ�޳�Ա����������Ȼ�ǹ���Ȩ��
//		m_b = 10;//�����еı���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
//		//m_c = 10;//�����е�˽��Ȩ�޳�Ա���������޷�����
//	}
//};
//void test01()
//{
//	son1 s1;
//	s1.m_a = 100;//����Ȩ�޿������������
//	//s1.m_b = 100;//����Ȩ�������ⲻ�ɷ���
//}
//
//
////�����̳�
//
//class base2
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son2 :protected base2
//{
//public:
//	void func()
//	{
//		m_a = 100;//�����й�����Ա���������Ϊ����Ȩ��
//		m_b = 100;//�����б�����Ա���������Ϊ����Ȩ��
//		//m_c = 100;//����˽�г�Ա�����޷�����
//	}
//};
//void test02()
//{
//	son2 s2;
//	//s2.m_a = 100;//��Ϊ����Ȩ�ޣ������޷�����
//	//s2.m_b = 100;//����Ȩ�ޣ��޷�����
//	//s2.m_c = 100;//˽��Ȩ�ޣ��޷�����
//}
//
//
////˽�м̳�
//
//class base3
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son3 :private base3
//{
//public:
//	void func()
//	{
//		m_a = 100;//�����й�����Ա���������Ϊ˽��Ȩ��
//		m_b = 100;//�����б�����Ա���������Ϊ˽��Ȩ��
//		//m_c = 100;//����˽�г�Ա�������޷�����
//	}
//};
//void test03()
//{
//	son3 s3;
//	//s3.m_a = 190;//˽��Ȩ�ޣ������޷�����
//	//s3.m_b = 190;//˽��Ȩ�ޣ������޷�����
//	//s3.m_c = 190;//˽��Ȩ�ޣ������޷�����
//}
//class grandson3 :public son3
//{
//public:
//	void func()
//	{
//		//m_a = 100;//����˽��Ȩ�ޣ��������޷�����
//	}
//};




//�̳��еĶ���ģ��

class base
{
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son :public base
{
public:
	int m_d;
};

void test01()
{
	//�����зǾ�̬��Ա���Զ��ᱻ����̳�
	//˽�����Ա������޷�����
	cout << sizeof(son) << endl;//16
}
int main()
{
	test01();
	system("pause");
	return 0;
}



//�̳��й���������˳��

class base
{
public:
	base()
	{
		cout << "base���캯��" << endl;
	}
};