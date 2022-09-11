//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once

#include<iostream>
using namespace std;
#include<string>


////初始化列表
////构造函数():属性1（值）,属性2（）,...{}
//class Person
//{
//public:
//	////传统初始化操作
//	//Person(int a, int b, int c)
//	//{
//	//	m_a = a;
//	//	m_b = b;
//	//	m_c = c;
//	//}
//
//	//初始化列表初始化属性
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



//类对象作为类成员
//类中成员是另一个类的对象

//class A {};
//class B
//{
//	A a;// 对象成员
//};

//class Phone
//{
//public:
//	Phone(string pname)
//	{
//		cout << "Phone的构造函数调用" << endl;
//		m_pname = pname;
//	}
//	~Phone()
//	{
//		cout << "Phone的析构函数调用" << endl;
//	}
//	string m_pname;
//};
//class Person
//{
//public:
//	Person(string name, string pname):m_name(name),m_phone(pname)
//	{
//		cout << "Person的构造函数调用" << endl;
//	}
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//
//	string m_name;
//	Phone m_phone;
//};
////当其他类对象作为本类对象，先构造类对象再构造自身，先析构自身再析构类对象
//void test01()
//{
//	Person p("zhangsan", "pingguomax");
//	cout << p.m_name << "有" << p.m_phone.m_pname << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//静态成员--静态成员变量、静态成员函数
//静态成员变量:1.所有对象共享一份数据2.再编译阶段分配内存3.类内申明，类外初始化
class Person
{
public:

};