//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once


#include<iostream>
using namespace std;
#include<string>


//对象模型、this指针
//c++，类中成员变量与成员函数分开储存
//只有非静态成员变量属于类的对象，其他都不属于

//class Person
//{
//	int m_a;//非静态成员变量，属于类对象
//
//	static int m_b;//静态成员变量，不属于类对象
//
//	void func(){}//成员变量与成员函数分开储存;非静态成员函数，不属于类对象
//};
//
//void test01()
//{
//	Person p;
//	//空对象占1字节，为了区分空对象占内存的位置
//	cout << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << sizeof(p) << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//this指针--指向被调用的成员函数所属的对象即哪个对象调用成员函数this指向哪个对象
//this指针隐含在每个非静态成员函数内的指针；不需定义，直接使用
//用途：1.形参和成员变量同名时，用this指针区分 2.类的非静态成员函数返回对象本身，可用return*this

//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;//this指向调用成员函数的对象
//	}
//
//	Person& Personaddage(Person&p)
//	{
//		this->age += p.age;
//
//		//this是指向p2的指针，*this是指向p2的本体
//		return*this;
//	}
//
//	int age;
//};
////1.解决名称冲突
//void test01()
//{
//	Person p1(18);
//	cout << "p1年龄：" << p1.age << endl;
//}
//
////2.返回对象本身用*this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//链式编程思想
//	p2.Personaddage(p1).Personaddage(p1).Personaddage(p1);
//
//	cout << "p2年龄：" << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//空指针访问成员函数
//c++空指针可以调用成员函数，要注意是否用到this指针

//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		/*if (NULL == this)
//		{
//			return;
//		}*/
//		cout << m_age << endl;//空指针无法访问类中的属性
//		//这里m_age相当于this->age
//	}
//
//	int m_age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//
//	p->showClassName();
//
//	//p->m_age = 10;//空指针无法访问类中的属性
//	p->showPersonAge();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//const修饰成员函数
//常函数、常对象

////常函数
//class Person
//{
//public:
//	//this指针本质 是指针常量  指针的指向是不可以修改的
//	void showPerson() const//这里const修饰this,即this指向的值不可修改
//	{
//		//this->m_a = 100;
//		this->m_b = 100;
//	}
//
//	void func()
//	{
//
//	}
//
//	int m_a;
//	mutable int m_b;//加上关键字mutable后，在常函数中就可以修改了
//};
//
////常对象
//void test01()
//{
//	const Person p;//在对象前加const,即为常对象
//	//p.m_a = 100;//这里报错不可修改
//	p.m_b = 100;//加上关键字mutable后，在常对象中就可以修改了
//
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.func();//不可调用
//}





//友元--全局函数做友元、类做友元、成员函数做友元

//全局函数做友元
class Building
{
	//全局函数为友元，可以访问私有成员
	friend void goodGay(Building* building);
public:
	Building()
	{
		m_sittingRoom = "客厅";
		m_bedRoom = "卧室";
	}

public:
	string m_sittingRoom;

private:
	string m_bedRoom;
};

//全局函数
void goodGay(Building*building)
{
	cout << building->m_sittingRoom << endl;

	cout << building->m_bedRoom << endl;

}

void test01()
{
	Building building;
	goodGay(&building);
}

int main()
{
	test01();
	system("pause");
	return 0;
}