////#define _CRT_SECURE_NO_WARNINGS 1
////#pragma once
////
////
////
////
////
////内存分区：
////代码区：所有字母（共享、只读）
////全局区：全局变量（函数外部）、静态变量、常量
////栈区：编译器管理，用于存放函数参数，局部变量（函数内部）等，离开作用域自动释放
////堆区：通过new和free关键字主动申请和删除，c++主要利用new在堆区开辟内存
//
//#include<iostream>
//using namespace std;
//int* fun()
//{
//	//利用new关键字，将数据开辟到堆区,返回指针
//	//指针本质也是局部变量，放于栈中，指针指向的数据在堆区中***************************
//	int* p = new int(10);
//	return p;
//}
//int main()
//{
//	int* p = fun();
//	cout << *p << endl;
//	system("pause");
//	return 0;
//}