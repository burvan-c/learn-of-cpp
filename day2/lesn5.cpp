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

////全局函数做友元
//class Building
//{
//	//全局函数为友元，可以访问私有成员
//	friend void goodGay(Building* building);
//public:
//	Building()
//	{
//		m_sittingRoom = "客厅";
//		m_bedRoom = "卧室";
//	}
//
//public:
//	string m_sittingRoom;
//
//private:
//	string m_bedRoom;
//};
//
////全局函数
//void goodGay(Building*building)
//{
//	cout << building->m_sittingRoom << endl;
//
//	cout << building->m_bedRoom << endl;
//
//}
//
//void test01()
//{
//	Building building;
//	goodGay(&building);
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//类做友元
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//参观函数，访问Building中的属性
//	Building* building;
//};
//
//class Building
//{
//	friend class GoodGay;//类做友元，可以访问private
//public:
//	Building();
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
//
////类外写成员函数
//Building::Building()//类::成员函数
//{
//	m_sittingroom = "客厅";
//	m_bedroom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	//创造建筑物对象
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << building->m_sittingroom << endl;
//	cout << building->m_bedroom << endl;
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//成员函数做友元
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit();//让visit可以访问Building中的私有函数
//	void visit2();//让visit不可以访问Building中的私有函数
//	Building* building;
//};
//class Building
//{
//	friend void GoodGay::visit();
//public:
//	Building();
//public:
//	string m_sittingroom;
//private:
//	string m_bedroom;
//};
////类外写成员函数
//Building::Building()//类::成员函数
//{
//	m_sittingroom = "客厅";
//	m_bedroom = "卧室";
//}
//GoodGay::GoodGay()
//{
//	//创造建筑物对象
//	building = new Building;
//}
//void GoodGay::visit()
//{
//	cout << "visit访问" << building->m_sittingroom << endl;
//	cout << "visit访问" << building->m_bedroom << endl;
//}
//void GoodGay::visit2()
//{
//	cout << "visit2访问" << building->m_sittingroom << endl;
//	//cout << "visit2访问" << building->m_bedroom << endl;//visit2非友元，不可访问private
//}
//void test01()
//{
//	GoodGay gg;
//	gg.visit();
//	gg.visit2();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//运算符重载：对已有的运算符重新定义，赋予另一种功能，以适应不同数据类型

//加法运算符重载--两自定义数据类型相加运算

//class Person
//{
//public:
//	//1.成员函数重载+号 
//	
//	//Person operator+(Person& p)//c++重载操作符--operator
//	//{
//	//	Person tmp;
//	//	tmp.m_a = this->m_a + p.m_a;
//	//	tmp.m_b = this->m_b + p.m_b;
//	//	return tmp;
//	//}
//
//	int m_a;
//	int m_b;
//};
//
////2.全局函数重载+号
//
//Person operator+(Person& p1, Person& p2)
//{
//		Person tmp;
//		tmp.m_a = p1.m_a + p2.m_a;
//		tmp.m_b = p1.m_b + p2.m_b;
//		return tmp;
//}
//
//void test01()
//{
//	Person p1;
//	p1.m_a = 10;
//	p1.m_b = 20;
//	Person p2;
//	p2.m_a = 30;
//	p2.m_b = 40;
//
//	//Person p3 = p1 + p2;//这里是 Person p3=p1.operator+(p2) 的缩写***********************
//
//	Person p3 = p1 + p2;//这里是 Person p3= operator+(p1，p2) 的缩写***********************
//	//运算符重载也可以发生函数重载即operator+后面的参数类型可以不同，做到灵活运用
//
//
//	cout << "p3.m_a= " << p3.m_a << endl;
//	cout << "p3.m_b= " << p3.m_b << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//左移运算符重载--输出自定义类型

//class Person
//{
//	 
//public:
//
//	//通常不会利用成员函数重载 左移运算符，因为无法实现cout在左侧
//	//void operator<<(cout)---简化为p<<cout
//	int m_a;
//	int m_b;
//};
//
////只能用全局函数重载左移运算符
//ostream & operator<<(ostream &cout, Person &p)//简化为cout<<p
//{
//	cout << "m_a= " << p.m_a << endl << "m_b= " << p.m_b;
//	return cout;
//}
//
//void test01()
//{
//	Person p;
//	p.m_a = 10;
//	p.m_b = 10;
//
//	cout << p<<endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}