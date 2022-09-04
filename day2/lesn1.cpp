#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<iostream>
using namespace std;

////new操作符--开辟堆区数据，用delete操作符释放
//int* func()
//{
//	//new返回的是该数据类型的指针
//	int* p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	//堆区的数据由程序员管理开辟与释放，用delete释放
//	delete p;
//	//cout << *p << endl;//野指针
//
//}
//
//
////在堆区利用new开辟数组
//void test02()
//{
//	int* arr = new int[10];//数组有10个元素
//	for (int i = 0; i < 10; i++)
//	{
//		*(arr + i) = i + 100;
//		cout << *(arr + i) << endl;
//	}
//
//	//释放堆区数组
//	delete[]arr;
//}
//
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}




////引用--给变量起别名
////数据类型 &别名=原名
//int main()
//{
//	int a = 10;
//	int& b = a;
//	cout << a << endl << b << endl;
//	b = 120;
//	cout << a << endl << b << endl;
//	//别名和原名都可以修改存储的数据
//
//	//注意事项：引用必须初始化；初始化后不可更改
//
//	system("pause");
//	return 0;
//}




////引用做函数参数
////值传递
//void myswap01(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
////地址传递
//void myswap02(int *a, int *b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//
////引用传递
//void myswap03(int &a, int &b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//myswap01(a,b);//值传递不改变实参
//
//	//myswap02(&a, &b);//地址传递可以改变实参
//
//	myswap03(a, b);//引用传递也可以改变实参，相当于起别名，用别名改变实参
//
//	cout << a << endl << b << endl;
//	system("pause");
//	return 0;
//}



////引用做函数返回值--不要返回局部变量的引用值（会被释放）；函数调用可作为左值
//int& test()//数据类型+函数名
//{
//	static int a = 10;//静态变量放全局区，在程序结束后才释放
//	return a;//返回a的引用
//}
//int main()
//{
//	int& ref = test();//test()相当于a,ref为别名
//	cout << ref << endl;
//	cout << ref << endl;
//
//	test() = 1000;//若函数返回的类型是引用，则函数调用可作为左值
//
//	cout << ref << endl;
//	cout << ref << endl;
//
//	
//
//	system("pause");
//	return 0;
//}



//引用的本质是指针常量





////常量引用const--主要修饰形参防止误操--加入const后变为只读，不可以修改
//void showvalue(const int& val)
//{
//	//val = 1000;错误
//	cout << val << endl;
//}
//int main()
//{
//	int a = 100;
//	showvalue(a);
//
//	cout << a << endl;
//
//
//	system("pause");
//	return 0;
//}



////函数默认参数
////若有函数申明则函数位置可以随意放置，函数申明与函数实现只能一个有默认参数
//int func(int a, int b=12, int c=13)//b c这里是默认值
//{
//	return a + b + c;
//}
//int main()
//{
//	cout << func(10,30) << endl;//首先采用实参传递的值
//
//	system("pause");
//	return 0;
//}




////函数占位参数--返回值类型 函数名 （数据类型）
////占位参数也可以有默认值--int=10
//void func(int a, int)//后面的int为占位参数
//{
//	cout << "func" << endl;
//}
//int main()
//{
//	func(10, 20);//若没有默认值，占位参数必须传值
//
//	system("pause");
//	return 0;
//}



////函数重载--函数名可以相同，提高复用性
////满足条件--同一作用域；函数名称相同；函数参数的类型或个数或顺序不同
////函数返回值不可以作为函数重载的条件
//void func()
//{
//	cout << "func的调用" << endl;
//}
//void func(int a)
//{
//	cout << "func(int a)的调用" << endl;
//}
//void func(double a)
//{
//	cout << "func(double a)的调用" << endl;
//}
//void func(int a, double b)
//{
//	cout << "func(int a, double b)的调用" << endl;
//}
//void func(double a, int b)
//{
//	cout << "func(double a, int b)的调用" << endl;
//}
//int main()
//{
//	func();
//	func(10);
//	func(3.14);
//	func(10, 3.14);
//	func(3.14, 10);
//
//	system("pause");
//	return 0;
//}



//函数重载注意事项
//1.引用作为重载条件
void func(int &a)
{
	cout << "func(int &a)的调用" << endl;
}
void func(const int& a)
{
	cout << "func(const int &a)的调用" << endl;
}

//函数重载遇到默认参数
void func2(int a)
{
	cout << "func2(int a)的调用" << endl;
}
void func2(int a,int b=10)
{
	cout << "func2(int a,int b)的调用" << endl;
}
int main()
{
	func(10);//10为常量
	int a = 11;
	func(a);//a为变量

	//func2(a);//此时函数重载遇到默认参数，出现二义性


	system("pause");
	return 0;
}