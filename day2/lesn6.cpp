//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once

#include<iostream>
using namespace std;


//继承

//class java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登入、注册……" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……" << endl;
//	}
//	void left()
//	{
//		cout << "c++、python、java……"<<endl;
//	}
//	void content()
//	{
//		cout << "java视频" << endl;
//	}
//};
//class python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登入、注册……" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……" << endl;
//	}
//	void left()
//	{
//		cout << "c++、python、java……" << endl;
//	}
//	void content()
//	{
//		cout << "pytnon视频" << endl;
//	}
//};
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登入、注册……" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……" << endl;
//	}
//	void left()
//	{
//		cout << "c++、python、java……" << endl;
//	}
//	void content()
//	{
//		cout << "c++视频" << endl;
//	}
//};


//继承实现页面

//class basepage//公共页面类
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登入、注册……" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……" << endl;
//	}
//	void left()
//	{
//		cout << "c++、python、java……" << endl;
//	}
//};
//
////继承可以减少重复代码
////语法：class 子类 ：继承方式 父类
////子类也叫派生类，父类也叫基类
//
//class java :public basepage
//{
//public:
//	void content()
//	{
//		cout << "java视频" << endl;
//	}
//};
//class python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "python视频" << endl;
//	}
//};
//class cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "cpp视频" << endl;
//	}
//};
//void test01()
//{
//	cout << "java学习页面" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "-----------------------" << endl;
//
//	cout << "python学习页面" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "-----------------------" << endl;
//
//	cout << "c++学习页面" << endl;
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



////继承方式--公共继承、保护继承、私有继承
//
////公共继承
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
//		m_a = 10;//父类中的公共权限成员到子类中依然是公共权限
//		m_b = 10;//父类中的保护权限成员到子类中依然是保护权限
//		//m_c = 10;//父类中的私有权限成员到子类中无法访问
//	}
//};
//void test01()
//{
//	son1 s1;
//	s1.m_a = 100;//公共权限可以在类外访问
//	//s1.m_b = 100;//保护权限在类外不可防问
//}
//
//
////保护继承
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
//		m_a = 100;//父类中公共成员，到子类变为保护权限
//		m_b = 100;//父类中保护成员，到子类变为保护权限
//		//m_c = 100;//父类私有成员子类无法访问
//	}
//};
//void test02()
//{
//	son2 s2;
//	//s2.m_a = 100;//变为保护权限，类外无法访问
//	//s2.m_b = 100;//保护权限，无法访问
//	//s2.m_c = 100;//私有权限，无法访问
//}
//
//
////私有继承
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
//		m_a = 100;//父类中公共成员，到子类变为私有权限
//		m_b = 100;//父类中保护成员，到子类变为私有权限
//		//m_c = 100;//父类私有成员，子类无法访问
//	}
//};
//void test03()
//{
//	son3 s3;
//	//s3.m_a = 190;//私有权限，类外无法访问
//	//s3.m_b = 190;//私有权限，类外无法访问
//	//s3.m_c = 190;//私有权限，类外无法访问
//}
//class grandson3 :public son3
//{
//public:
//	void func()
//	{
//		//m_a = 100;//子类私有权限，孙子类无法访问
//	}
//};




//继承中的对象模型

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
	//父类中非静态成员属性都会被子类继承
	//私有属性被隐藏无法访问
	cout << sizeof(son) << endl;//16
}
int main()
{
	test01();
	system("pause");
	return 0;
}



//继承中构造与析构顺序

class base
{
public:
	base()
	{
		cout << "base构造函数" << endl;
	}
};