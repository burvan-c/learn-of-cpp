#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include<string>
#define MAX 1000


//通讯录管理系统


//联系人结构体
struct Person
{
	string name;
	int m_sex;//1男2女
	int m_age;
	string m_phine;
	string m_addr;
};
//通讯录结构体
struct Addressbooks
{
	//保存联系人数组
	struct Person pArray[MAX];
	//通讯录当前记录人数个数
	int m_size;
};
void addPerson(Addressbooks* abs)
{

}
//菜单
void showMenu()
{
	cout << "***** 1.添加联系人 *****" << endl;
	cout << "***** 2.显示联系人 *****" << endl;
	cout << "***** 3.删除联系人 *****" << endl;
	cout << "***** 4.查找联系人 *****" << endl;
	cout << "***** 5.修改联系人 *****" << endl;
	cout << "***** 6.清空联系人 *****" << endl;
	cout << "***** 0.退出通讯录 *****" << endl;
}

int main()
{
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录
	abs.m_size = 0;

	int select = 0;//创建用户输入变量

	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1.添加联系人
			addPerson(&abs);//地址传递才可以改变实参
			break;
		case 2://2.显示联系人
			break;
		case 3://3.删除联系人
			break;
		case 4://4.查找联系人
			break;
		case 5://5.修改联系人
			break;
		case 6://6.清空联系人
			break;
		case 0://0.退出通讯录
			cout << "退出" << endl;
			system("pause");
			return 0;//这里0返回给while
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return 0;
}