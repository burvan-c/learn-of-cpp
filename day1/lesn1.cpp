#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<iostream>   //in  out   stream     输入输出流
using namespace std;   //调用命名空间std内定义的所有标识符;标准库中的所有内容都放置在命名空间std中



#define Day 7
int main()
{
	cout << "hello world" << endl;
	//endl--标准库输入输出换行




	//变量创建语法:数据类型 变量名=初始值;
	int a = 10;
	cout << "a = " << a << endl;




	//c++定义常量方式：(常量不可修改）
	//1.宏常量：#define 常量名 常量值（只是定义符号，不是typedef定义类型）
	//2.const常变量：const 数据类型 常量名=常量值（不可更改）
	cout << "一周有" << Day << "天" << endl;
	const int month = 12;
	cout << "一年有" << month << "月" << endl;



	//关键字（标识符）--不可使用
	int num1 = 2;
	int num2 = 8;
	cout << num1 + num2 << endl;



	//整形：short--2字节；int--4字节；long--4字节或8字节；long long--8字节
	short num1_1 = 10;
	int num2_2 = 10;
	long num3_3 = 10;
	long long num4_4 = 10;
	cout << sizeof(short) << endl;//sizeof(数据类型/变量)--所占字节大小
	cout << sizeof(int) << endl;//
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;




	//浮点型: float--4字节   double--8字节
	float f1 = 3.14f;//加上f表示单精度
	double d1 = 3.14;


	//科学计数法
	float f2 = 3e-2;
	cout << f2 << endl;



	system("pause");
	//在进行C/C++编程的时候，在运行程序查看输出效果时，会出现窗口闪一下就关闭的情况
	//在C++中一般在main函数中的return之前添加system("pause");这样就可以看清楚输出的结果

	return 0;
}