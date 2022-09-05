#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include<string>


//类和对象

//封装
//class 类名{访问权限：属性/行为};
// 
//设计一个圆类，求圆的周长
const double PI = 3.14;
class Circle
{
	//访问权限
public://公共权限

	//属性
	int r;

	//行为
	double cal()
	{
		return 2 * PI * r;
	}
};

class Student
{
public://公共权限
	//类中属性和行为 统一称为成员
	//属性  成员属性 成员变量
	//行为  成员函数 成员方法

	//属性
	string name;
	int id;

	//行为
	void showStudent()
	{
		cout << "姓名：" << name <<"\t" << "学号：" << id << endl;
	}

	//给姓名赋值
	void setname(string m_name)
	{
		name = m_name;
	}
};
int main()
{
	//通过圆类，创建具体的圆（对象）
	Circle c1;
	//给圆对象的属性进行赋值
	c1.r = 10;
	cout << "圆周长：" << c1.cal() << endl;



	//创建一个具体的学生
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

