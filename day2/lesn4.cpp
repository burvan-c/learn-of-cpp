//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once

//#include<iostream>
//using namespace std;
//#include<string>


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
//静态成员变量:1.所有对象共享一份数据 2.再编译阶段分配内存 3.类内申明，类外初始化
//静态成员函数：1.所有对象共享同一个函数 2.静态成员函数只能访问静态成员变量

//class Person
//{
//public:
//	static int m_a; 
//	//静态成员变量有访问权限
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
//	p2.m_a = 200;             //m_a是共享数据，p2改为200后，大家拿到都是200
//	cout << p.m_a << endl;
//}
//
//void test02()
//{
//	//静态成员变量，不属于某个对象，所有对象共享同一份数据
//	//静态成员变量两种访问方式
//
//	//1.通过对象访问
//	Person p;
//	cout << p.m_a << endl;
//
//	//2.通过类名访问
//	cout << Person::m_a << endl;
//	//cout << Person::m_b << endl;//private类外不可访问
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}




//静态成员函数：1.所有对象共享同一个函数 2.静态成员函数只能访问静态成员变量

//class Person
//{
//public:
//	//静态成员函数
//	static void func()
//	{
//		m_a = 120;
//		//m_b=200;//不可访问非静态成员变量
//		cout << "static void func调用" << endl;
//	}
//	static int m_a;
//	int m_b;
//
//	//静态成员函数也有访问权限
//private:
//	static void func2()
//	{
//		cout << "static void func2调用" << endl;
//
//	}
//};
//int Person::m_a = 0;
//
//void test01()
//{
//	//1.通过对象进行访问
//	Person p;
//	p.func();
//
//	//2.通过类名访问
//	Person::func();
//
//
//
//	//Person::func2();//private类外不可访问
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}