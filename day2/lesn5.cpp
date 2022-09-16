//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once


//#include<iostream>
//using namespace std;
//#include<string>


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


//递增运算符重载--实现自己的整形数据

//自定义整形
//class myinteger
//{
//	friend ostream& operator<<(ostream& cout, myinteger myint);
//public:
//	myinteger()
//	{
//		m_num = 0;
//	}
//
//	//重载前置++运算符
//	myinteger& operator++()//返回引用是为了一直对一个数据进行递增操作
//	{
//		m_num++;
//		return *this;
//	}
//
//	//重载前置++运算符
//	//void operator++(int)  int 代表占位参数，用于区分前置和后置递增
//	myinteger operator++(int)
//	{
//		myinteger tmp = *this;
//		m_num++;
//		return tmp;
//	}
//
//private:
//	int m_num;
//};
//
//重载左移运算符
//ostream& operator<<(ostream& cout, myinteger myint)
//{
//	cout << myint.m_num;
//	return cout;
//}
//void test01()
//{
//	myinteger myint;
//	cout << ++myint << endl;
//}
//void test02()
//{
//	myinteger myint;
//	cout << myint++ << endl;
//	cout << myint << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}


//赋值运算符重载

//c++编译器至少给一个类添加4个函数
//1.默认构造函数 2.默认析构函数 3.默认拷贝构造函数 4.赋值运算符operator=对属性进行值拷贝

//class Person
//{
//public:
//	Person(int age)
//	{
//		m_age = new int(age);
//	}
//
//	~Person()
//	{
//		if (NULL != m_age)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//
//	//重载 赋值运算符
//	Person& operator=(Person&p)
//	{
//		//先判断是否有属性，若有先释放，再深拷贝
//		if(m_age!=NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//		m_age = new int(*p.m_age);//深拷贝
//		return *this;
//	}
//
//	int* m_age; 
//};
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1;//这里会浅拷贝，把值拷贝过去，堆区内容重复释放，程序崩溃！
//
//	cout << "p1年龄：" << *p1.m_age << endl;
//	cout << "p2年龄：" << *p2.m_age << endl;
//	cout << "p3年龄：" << *p3.m_age << endl;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//关系运算符重载

//class Person
//{
//public:
//	Person(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//
//	//重载==号
//	bool operator==(Person& p)
//	{
//		if (this->m_name == p.m_name && this->m_age == p.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	string m_name;
//	int m_age;
//};
//void test01()
//{
//	Person p1("tom", 18);
//	Person p2("tomy", 18);
//
//	if (p1 == p2)
//	{
//		cout << "p1与p2相等" << endl;
//	}
//	else
//	{
//		cout << "p1与p2不相等" << endl;
//	}
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//函数调用运算（）符重载，也称为仿函数 

//class myprint
//{
//public:
//	//重载函数调用运算符
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//class myadd
//{
//public:
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//void test01()
//{
//	myprint myprint;//使用时很类似函数调用，又称为仿函数
//	myprint("hello world");
//}
//void test02()
//{
//	myadd myadd1;
//	int ret=myadd1(100, 100);
//	cout << ret << endl;
//
//	//匿名函数对象--当前执行完立即被释放
//	cout << myadd()(100, 100) << endl;
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}