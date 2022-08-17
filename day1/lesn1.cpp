#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<iostream>   //in  out   stream     输入输出流
using namespace std;   //调用命名空间std内定义的所有标识符;标准库中的所有内容都放置在命名空间std中
#include<string>
#include<stdlib.h>
#include<time.h>


//#define Day 7
int main()
{
	//cout << "hello world" << endl;
	////endl--标准库输入输出换行




	////变量创建语法:数据类型 变量名=初始值;
	//int a = 10;
	//cout << "a = " << a << endl;




	////c++定义常量方式：(常量不可修改）
	////1.宏常量：#define 常量名 常量值（只是定义符号，不是typedef定义类型）
	////2.const常变量：const 数据类型 常量名=常量值（不可更改）
	//cout << "一周有" << Day << "天" << endl;
	//const int month = 12;
	//cout << "一年有" << month << "月" << endl;



	////关键字（标识符）--不可使用
	//int num1 = 2;
	//int num2 = 8;
	//cout << num1 + num2 << endl;



	////整形：short--2字节；int--4字节；long--4字节或8字节；long long--8字节
	//short num1_1 = 10;
	//int num2_2 = 10;
	//long num3_3 = 10;
	//long long num4_4 = 10;
	//cout << sizeof(short) << endl;//sizeof(数据类型/变量)--所占字节大小
	//cout << sizeof(int) << endl;//
	//cout << sizeof(long) << endl;
	//cout << sizeof(long long) << endl;




	////浮点型: float--4字节   double--8字节
	//float f1 = 3.14f;//加上f表示单精度
	//double d1 = 3.14;


	////科学计数法
	//float f2 = 3e-2;
	//cout << f2 << endl;



	////字符型--单引号字符，双引号字符串
	////char型占一个字节，将对应的ASCII值放入存储单元
	//char ch = 'a';
	//cout << ch << endl<<sizeof(char)<<endl<<(int)ch<<endl;



	////转义字符    \n换行   \\反斜杠   \t水平制表符(8个位置，空格补齐，对齐效果) ..........
	//cout << "hello world\n" << "\\" << endl << "aaa\thello world" << endl;
	//


	////字符串型
	////C风格：char 变量名【】="字符串"(用数组存放字符串)
	////C++风格：string 变量名="字符串"
	//char str1[] = "hello world";
	//string str2 = "hello world";
	//cout << str1 << endl << str2 << endl;



	////布尔类型 true  false   占1个字节
	//bool flag = true;
	//cout << flag << endl << sizeof(bool) << endl;


	////数据的输入输出
	//int b = 0;
	//cin >> b;
	//cout << b << endl;



	////运算符



	////选择结构
	//int score = 0;
	//cout << "输入分数:";
	//cin >> score;
	//if (score > 600)       //后面不要加分号
	//{
	//	cout << "考上一本" << endl;
	//}
	//else if (score > 500)
	//{
	//	cout <<"考上二本" << endl;
	//}
	//else
	//{
	//	cout << "继续努力" << endl;
	//}



	////嵌套if语句
	//int score = 0;
	//cin >> score;
	//if (score > 600)
	//{
	//	cout << "一本" << endl;
	//	if (score > 700)
	//	{
	//		cout << "北大" << endl;
	//	}
	//	else if (score > 650)
	//	{
	//		cout << "清华" << endl;
	//	}
	//	else
	//	{
	//		cout << "人大" << endl;
	//	}
	//}
	//else if (score > 500)
	//{
	//	cout << "二本" << endl;
	//}
	//else
	//{
	//	cout << "继续努力" << endl;
	//}



	//	//三只小猪称体重
//	int a = 0, b = 0, c = 0;
//
//	cout << "a小猪重量：" ;
//		cout << "b小猪重量：" ;
//	cin >> b;
//cin >> a;
//
//
//	cout << "c小猪重量：" ;
//	cin >> c;
//
//	if (a > b)
//	{
//		if (a > c)
//		{
//			cout << "a猪最重" << endl;
//		}
//		else
//		{
//			cout << "c猪最重" << endl;
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			cout << "b猪最重" << endl;
//		}
//		else
//		{
//			cout << "c猪最重" << endl;
//		}
//	}



	////三目运算符
	//int a = 10, b = 20, c = 0;
	//c = (a > b ? a : b);
	//cout << c << endl;
	////c++中三目运算符为变量，可以继续赋值
	//a > b ? a : b = 120;
	//cout << b << endl;


	////switch   case   break   default
	////电影打分
	//int score = 0;	
	//cin >> score;
	//switch(score)
	//{
	//case 10:
	//	cout << "经典电影" << endl;
	//	break;//退出选择或循环语句
	//case 9:
	//	cout << "经典电影" << endl;
	//	break;
	//case 8:
	//	cout << "好电影" << endl;
	//	break;
	//case 7:
	//	cout << "好电影" << endl;
	//	break;
	//case 6:
	//	cout << "一般电影" << endl;
	//	break;
	//case 5:
	//	cout << "一般电影" << endl;
	//	break;
	//default:
	//	cout << "烂片" << endl;
	//	break;
	//}
	////switch结构清晰，效率高；判断条件不可以是一个区间



	//while循环
	/*int a = 0;
	while (a < 10)
	{
		cout << a << endl;
		a++;
	}*/
	////猜数字
	//srand((unsigned int)time(NULL));
	//int a = rand() % 100 + 1;//生成1--100随机数
	////cout << a << endl;
	//int b = 0;
	//while (a)
	//{
	//	cin >> b;
	//	if (a > b)
	//	{
	//		cout << "猜小了" << endl;
	//	}
	//	else if (a < b)
	//	{
	//		cout << "猜大了" << endl;
	//	}
	//	else
	//	{
	//		cout << "猜对了" << endl;
	//		break;//跳出循环
	//	}
	//}
	



	////do  while循环语句
	//int a = 0;
	//do
	//{
	//	cout << a << endl;
	//	a++;
	//} while (a<10);


	////for循环
	////for (int i = 0; i < 10; i++)
	////{
	////	cout << i << endl;
	////}

	//敲桌子
	/*for (int i = 1; i <= 100; i++)
	{
		if (i%7==0||i%10==7||i/10==7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}*/

	//    //打印星图
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		cout << "* ";
	//	}
	//		cout << endl;
	//}



	////乘法口诀表
	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << j << "*" << i << "=" << j * i<<"\t";
	//	}
	//	cout << endl;
	//}


	////跳转语句--break  跳出case或者循环语句
	//cout << "选择副本难度" << endl << "1.普通" << "\t" << "2.中等" << "\t" << "3.困难" << "\n";
	//int select = 0;
	//cin >> select;
	//switch (select)
	//{
	//case 1:
	//	cout << "进入普通副本" << endl;
	//	break;
	//case 2:
	//	cout << "进入中等副本" << endl;
	//	break;
	//case 3:
	//	cout << "进入困难副本" << endl;
	//	break;
	//default:
	//	break;
	//}



	//for (int i = 0; i < 10; i++)
	//{
	//	if (5 == i)
	//	{
	//		break;//跳出循环
	//	}
	//	cout << i <<" ";
	//}

	//cout << endl;

	//for (int i = 0; i < 10; i++)//行
	//{
	//	for (int j = 0; j < 10; j++)//列
	//	{
	//		if (j == 5)
	//		{
	//			break;
	//		}
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}


	////continue--执行到本行就不再执行后面代码，去执行下一次循环
	//for (int i = 0; i < 10; i++)
	//{
	//	if (5 == i)
	//	{
	//		continue; 
	//	}
	//	cout << i << " ";
	//}


	for (int i = 0; i <= 100; i++)
	{
		//奇数输出，偶数不输出
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}


	//goto语句




	system("pause");
	//在进行C/C++编程的时候，在运行程序查看输出效果时，会出现窗口闪一下就关闭的情况
	//在C++中一般在main函数中的return之前添加system("pause");这样就可以看清楚输出的结果

	return 0;
}