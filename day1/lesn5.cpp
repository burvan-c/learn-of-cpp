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
	string m_name;
	int m_sex;//1男2女
	int m_age;
	string m_phone;
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
	//判断通讯录是否已满
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		//添加具体联系人
		//姓名、性别、年龄、电话、住址
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		abs->pArray[abs->m_size].m_name = name;

		cout << "请输入性别：" << endl;
		cout << "1--男" << endl;
		cout << "2--女" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			//输入正确退出循环，输入错误重新输入
			if (1 == sex || 2 == sex)
			{
				abs->pArray[abs->m_size].m_sex = sex;
				break;
			}
			else
			{
				cout << "输入错误，重新输入" << endl;
			}
		}
		
		cout << "请输入年龄" << endl;
		int age = 0;
		cin >> age;
		abs->pArray[abs->m_size].m_age = age;

		cout << "请输入联系电话：" << endl;
		string phone;
		cin >> phone;
		abs->pArray[abs->m_size].m_phone = phone;

		cout << "请输入地址：" << endl;
		string address;
		cin >> address;
		abs->pArray[abs->m_size].m_addr = address;

		//更新通讯录人数
		abs->m_size++;

		cout << "添加成功" << endl;

		system("pause");//请按任意键继续
		system("cls");//清屏操作
	}
}

void showPerson(Addressbooks* abs)
{
	//判断通讯录人数是否为0
	if (abs->m_size == 0)
	{
		cout << "当前记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名：" << abs->pArray[i].m_name << "\t";
			cout << "性别：" << (abs->pArray[i].m_sex==1?"男":"女") << "\t";//三目运算符--妙！
			cout << "年龄：" << abs->pArray[i].m_age << "\t";
			cout << "电话：" << abs->pArray[i].m_phone << "\t";
			cout << "住址：" << abs->pArray[i].m_addr << endl;
		}
	}
	system("pause");//请按任意键继续
	system("cls");//清屏操作
}
//检测联系人是否存在，若存在返回位置删除联系人，若不存在返回-1
//参数1--通讯录    参数2--对比姓名
int isExist(Addressbooks* abs,string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->pArray[i].m_name == name)
		{
			return i;//找到了
		}
	}
	return -1;//未找到
}
//删除指定联系人
void deletePerson(Addressbooks* abs)
{
	cout << "请输入要删除的联系人" << endl;

	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (-1 != ret)
	{
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->pArray[i] = abs->pArray[i + 1];//不用分开写
		}
		abs->m_size--;//更新通讯录中的人员数
		cout << "删除成功" << endl;
	}
	else
	{
		cout << "查无此人" << endl;
	}

	system("pause");//请按任意键继续
	system("cls");//清屏操作
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
			showPerson(&abs);
			break;
		case 3://3.删除联系人
		/*{
			cout << "请输入要删除联系人的姓名：" << endl;
			string name;
			cin >> name;

			if (isExist(&abs, name) == -1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				cout << "找到此人" << endl;
			}
		}*/
			deletePerson(&abs);
			break;//case语句中，break前的代码过长时要加大括号，否则报错
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