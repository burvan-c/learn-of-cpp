//#define _CRT_SECURE_NO_WARNINGS 1




//对象初始化与清理--构造函数（初始化）、析构函数（清理）

//构造函数：类名(){}
//          没有返回值,不写void
//          函数名与类名相同
//          可以有参数，可以发生重载
//          创建对象时会自动调用，仅一次

//析构函数：~类名（）{}
//          没有返回值,不写void
//          函数名与类名相同
//          不可以有参数，不可以发生重载
//          销毁对象时会自动调用，仅一次


#include<iostream>
using namespace std;

//构造函数

//class Person
//{
//public:
//	//构造函数
//	Person()//没有返回值与void,与类名相同
//	{
//		cout << "Person构造函数的调用" << endl;
//	}
//
//	//析构函数
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//};
//
//void test01()
//{
//	Person p;//在这里构造函数和析构函数会被自动调用一次，不用在p后面加（）
//	//在栈的数据，test01在执行完毕后，释放这个对象
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//构造函数分类与调用
//    有参构造、无参构造（无参构造又称为默认构造）
//    普通构造、拷贝构造
//    调用方式：括号法、显示法、隐式转换法

//class Person
//{
//public:
//	//构造函数
//	Person()//没有返回值与void,与类名相同
//	{
//		cout << "Person无参构造函数的调用" << endl;
//	}
//	Person(int a)//没有返回值与void,与类名相同
//	{
//		age = a;
//		cout << "Person有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数
//	Person(const Person &p)//把（）内类属性拷贝到（）外的构造函数里
//	{
//		age = p.age;
//		cout << "Person拷贝构造函数的调用" << endl;
//	}
//	int age;
//
//
//
//	//析构函数
//	~Person()
//	{
//		cout << "Person的析构函数调用" << endl;
//	}
//};
//
////调用
//void test01()
//{
//	//1.括号法
//	Person p1;//默认构造函数的调用(无参）
//	Person p2(10);//有参构造函数调用
//	Person p3(p2);//拷贝构造函数的调用
//	//注意事项
//	//调用默认构造时，不加（）
//	cout << "p2的年龄为：" << p2.age << endl;
//	cout << "p3的年龄为：" << p2.age << endl;
//
//
//	//2.显示法
//	Person p1;
//	Person p2 = Person(10);//有参构造函数调用（等号左侧为名，等号右侧为匿名对象）
//	Person p3 = Person(p2);//拷贝构造函数调用（此行结束后，匿名对象立刻被回收掉）
//	//注意事项
//	//不能用拷贝构造函数初始化匿名对象
//
//
//	//3.隐式转换法
//	Person p4 = 10;//相当于Person p4=Person (10);
//	Person p5 = p4;//拷贝构造调用
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//拷贝构造函数调用时机
//1.使用一个已经创建完毕的对象来初始化一个新对象
//2.值传递的方式给函数传参
//3.值方式返回局部对象

class Person
{
public:
	Person()
	{
		cout << "Person默认构造函数调用" << endl;
	}
	Person(int age)
	{
		m_age = age;
		cout << "Person有参构造函数调用" << endl;
	}
	Person(const Person& p)
	{
		m_age = p.m_age;
		cout << "Person拷贝构造函数调用" << endl;
	}

	~Person()
	{
		cout << "Person析构函数调用" << endl;
	}

	int m_age;
};

//1.使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
	Person p1(20);
	Person p2(p1);
	cout << "p2的年龄：" << p2.m_age << endl;
}

//2.值传递的方式给函数传参
void dowork(Person p)//实参传给形参时会调用拷贝构造函数
{

}
void test02()
{
	Person p;//调用默认构造函数
	dowork(p);
}

//3.值方式返回局部对象
Person dowork2()
{
	Person p1;//这里调用了默认构造函数
	return p1;//以值的方式返回，按照p1拷贝新的对象返回给test03()
}
void test03()
{
	Person p = dowork2();
}
int main()
{
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}


//构造函数调用规则：
// 用户定义有参构造函数，C++提共默认拷贝构造函数
// 用户定义拷贝构造函数，c++不提供其他函数
// 
//默认情况下，c++编译器至少给一个类添加3个函数
//默认构造函数（无参，函数体为空）
//默认析构函数（无参，函数体为空）
//默认拷贝构造函数，对属性进行值拷贝

