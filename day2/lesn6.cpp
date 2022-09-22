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

//class base
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son :public base
//{
//public:
//	int m_d;
//};
//
//void test01()
//{
//	//父类中非静态成员属性都会被子类继承
//	//私有属性被隐藏无法访问
//	cout << sizeof(son) << endl;//16
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//继承中构造与析构顺序

//class base
//{
//public:
//	base()
//	{
//		cout << "base构造函数" << endl;
//	}
//	~base()
//	{
//		cout << "base析构函数" << endl;
//	}
//};
//
//class son :public base
//{
//public:
//	son()
//	{
//		cout << "son构造函数" << endl;
//	}
//	~son()
//	{
//		cout << "son析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	//base b;
//	//先构造父类，后构造子类；析构与其相反
//	son s;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//继承同名成员处理方式--子类与父类同名
//直接访问子类同名成员；访问父类需加作用域

//class base
//{
//public:
//	base()
//	{
//		m_a = 20;
//	}
//	void func()
//	{
//		cout << "base->func调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "son->func(int a)调用" << endl;
//	}
//	int m_a;
//	int m_a;
//};
//class son :public base
//{
//public:
//	son()
//	{
//		m_a = 30;
//	}
//	void func()
//	{
//		cout << "son->func调用" << endl;
//	}
//	
//};
//void test01()
//{
//	son s;
//	cout << s.m_a << endl;//子类直接访问
//
//	cout << s.base::m_a << endl;//同名时父类要加上作用域
//}
//void test02()
//{
//	son s;
//	s.func();//子类直接访问
//
//	s.base::func();//同名时父类要加上作用域
//
//	//s.func(100);//这里子类会隐藏所有父类的同名函数
//	s.base::func(100);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//继承 同名静态成员处理方式
//直接访问子类同名成员；访问父类需加作用域

//class base
//{
//public:
//	static int m_a;//类内申明，类外初始化
//	static void func()
//	{
//		cout << "base-static void func()" << endl;
//	}
//};
//int base::m_a = 20;
//
//class son:public base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "son-static void func()" << endl;
//	}
//};
//int son::m_a = 300;
//
////同名静态成员属性
//void test01()
//{
//	son s;
//	//通过对象访问
//	cout << s.m_a << endl;
//	cout << s.base::m_a << endl;
//
//	//通过类名访问
//	cout << son::m_a << endl;
//	cout << son::base::m_a << endl;
//}
//
////同名静态成员函数
//void test02()
//{
//	son s;
//	//通过对象访问
//	s.func();
//	s.base::func();
//
//	//通过类名访问
//	son::func();
//	son::base::func();
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//多继承语法--允许一个类继承多个类
//class 子类：继承方式 父类1，继承方式 父类2……
//父类有同名时需加作用域

//class base1
//{
//public:
//	base1()
//	{
//		m_a = 20;
//	}
//	int m_a;
//};
//class base2
//{
//public:
//	base2()
//	{
//		m_a = 60;
//	}
//	int m_a;
//};
//class son :public base1, public base2
//{
//public:
//	son()
//	{
//		m_c = 30;
//		m_d = 40;
//	}
//	int m_c;
//	int m_d;
//};
//void test01()
//{
//	son s;
//	cout << sizeof(s) << endl;
//	cout << s.base1::m_a << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//菱形继承--同一个基类继承给两个派生类，再继承给另一个类

//class animal
//{
//public:
//	int m_a;
//};
////虚继承解决问题
//class sheep :virtual public animal//此时animal为虚基类
//{};
//class tuo:virtual public animal
//{};
//class sheeptuo :public sheep, public tuo
//{};
//void test01()
//{
//	sheeptuo st;
//	st.sheep::m_a = 18;
//	st.tuo::m_a = 20;
//	cout << st.sheep::m_a << endl;
//	cout << st.tuo::m_a << endl;
//	//菱形继承会导致资源浪费，可利用虚继承解决
//	cout << st.m_a << endl;
//	//虚继承后相当于共用一个数据
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}







//多态
//静态多态（函数重载、运算符重载）
//动态多态

//动态多态满足条件：
//1.有继承关系
//2.子类重写父类的虚函数（重写：函数返回值类型 函数名 参数 完全相同）

//动态多态使用
//1.父类的指针或引用 执行子类对象

//class animal
//{
//public:
//	/*void speak()    //对应  地址早绑定
//	{
//		cout << "动物说话" << endl;
//	}*/
//
//	//虚函数
//
//	virtual void speak()    //对应  地址晚绑定
//	{
//		cout << "动物说话" << endl;
//	}
//	//虚函数指针->虚函数表->记录虚函数地址
//};
//
//class cat :public animal
//{
//public:
//	 void speak()
//	{
//		cout << "喵喵" << endl;
//	}
//};
//
////执行函数
//void dospeak(animal& animal)//animal&animal=cat c
//{    //这里地址早绑定，在编译阶段已确定函数地址，用animal类中的speak函数
//	animal.speak();
//}
//
//void test01()
//{
//	cat c;
//	dospeak(c);
//	//想要执行cat中的speak函数，必须地址晚绑定，在animal中执行virtual void speak()
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//多态案列--计算器类
//普通写法、多态写法

//普通写法
class calculater
{
public:
	int getresult(string oper)
	{
		if ("+" == oper)
		{
			return m_num1 + m_num2;
		}
		else if ("-" == oper)
		{
			return m_num1 - m_num2;
		}
		else if ("*" == oper)
		{
			return m_num1 * m_num2;
		}
	}

	int m_num1;
	int m_num2;
};
void test01()
{

}