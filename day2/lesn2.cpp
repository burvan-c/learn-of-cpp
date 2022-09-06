//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//#include<iostream>
//using namespace std;
//#include<string>


////类和对象
//
////封装
////class 类名{访问权限：属性/行为};
//// 
////设计一个圆类，求圆的周长
//const double PI = 3.14;
//class Circle
//{
//	//访问权限
//public://公共权限
//
//	//属性
//	int r;
//
//	//行为
//	double cal()
//	{
//		return 2 * PI * r;
//	}
//};
//
//class Student
//{
//public://公共权限
//	//类中属性和行为 统一称为成员
//	//属性  成员属性 成员变量
//	//行为  成员函数 成员方法
//
//	//属性
//	string name;
//	int id;
//
//	//行为
//	void showStudent()
//	{
//		cout << "姓名：" << name <<"\t" << "学号：" << id << endl;
//	}
//
//	//给姓名赋值
//	void setname(string m_name)
//	{
//		name = m_name;
//	}
//};
//int main()
//{
//	//通过圆类，创建具体的圆（对象）
//	Circle c1;
//	//给圆对象的属性进行赋值
//	c1.r = 10;
//	cout << "圆周长：" << c1.cal() << endl;
//
//
//
//	//创建一个具体的学生
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



////封装访问权限：公共权限、保护权限、私有权限
////public  类内类外都可以访问
////protected  类内可以访问，类外不可以访问
////private    类内可以访问，类外不可以访问
//class Person
//{
//public:
//	//公共权限
//	string m_name;
//
//protected:
//	//保护权限
//	string m_car;
//
//private:
//	//私有权限
//	int m_password;
//
//public:
//	void func()
//	{
//		m_car = "yuolaji";//保护权限类内访问
//		m_password = 123456;//私有权限类内访问
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



////struct与class的区别：默认访问权限不同
////struct    默认访问权限为公有
////class     默认访问权限为私有
//class C1
//{
//	int m_a;//默认访问权限为私有
//};
//struct C2
//{
//	int m_a;//默认访问权限为公有
//};
//int main()
//{
//	C1 c1;
//	//c1.m_a;//这里报错无法访问
//	C2 c2;
//	c2.m_a;//这里可以访问
//
//	system("pause");
//	return 0;
//}



////成员属性私有化--自己控制读写权限；对于写可以检测数据的有效性
//class Person
//{
//public:
//	//设置姓名
//	void setname(string name)
//	{
//		m_name = name;
//	}
//	//获取姓名
//	string getname()
//	{
//		return m_name;
//	}
//
//	//设置年龄
//	void setage(int age)
//	{
//		if (age < 0 || 150 < age)
//		{
//			m_age = 0;
//			cout << "年龄有误" << endl;
//			return;//退出这个函数
//		}
//		m_age = age;
//	}
//
//	//获取年龄
//	int getage()
//	{
//		//m_age = 20;
//		return m_age;
//	}
//
//	//设置情人
//	void setlover(string lover)
//	{
//		m_lover = lover;
//	}
//
//private:
//	string m_name;//可读可写
//	int m_age;//只读=>可读可写
//	string m_lover;//只写
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