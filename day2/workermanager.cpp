//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//职工管理系统

#include"workermanager.h"
workermanager::workermanager()
{
	//初始化属性
	this->m_empnum = 0;
	this->m_emparray = NULL;
}


void workermanager::show_menu()//展示菜单
{
	cout << "0.退出管理程序" << endl;
	cout << "1.增加职工信息" << endl;
	cout << "2.显示职工信息" << endl;
	cout << "3.删除离职职工" << endl;
	cout << "4.修改职工信息" << endl;
	cout << "5.查找职工信息" << endl;
	cout << "6.按照编号排序" << endl;
	cout << "7.清空所有文档" << endl;
	cout << endl;
}

void workermanager::exitsystem()
{
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);//退出程序
}

//添加职工
void workermanager::add_emp()
{
	cout << "输入添加职工数量" << endl;

	int addnum = 0;//保存用户的输入数量

	cin >> addnum;
	if (addnum > 0)
	{
		//添加
		//计算添加空间大小
		int newsize = this->m_empnum + addnum;

		//开辟新空间
		worker** newspace = new worker * [newsize];

		//将原来空间下的数据，拷贝到新空间下
		if (this->m_emparray != NULL)
		{
			for (int i = 0; i < this->m_empnum; i++)
			{
				newspace[i] = this->m_emparray[i];
			}
		}

		//批量添加新数据
		for (int i = 0; i < addnum; i++)
		{
			int id;//职工编号
			string name;//职工姓名
			int dselect;//部门选择

			cout << "请输入第" << i + 1 << "新职工的编号：" << endl;
			cin >> id;

			cout << "请输入第" << i + 1 << "新职工的姓名：" << endl;
			cin >> name;

			cout << "请选择该职工的岗位：" << endl;
			cout << "1、普通职工" << endl;
			cout << "2、经理" << endl;
			cout << "3、老板" << endl;
			cin >> dselect;

			worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new employee(id, name, 1);
				break;
			case 2:
				worker = new manager(id, name, 2);
				break;
			case 3:
				worker = new boss(id, name, 3);
				break;
			default:
				break;
			}

			//将创建职工职责保存到数组中
			newspace[this->m_empnum + i] = worker;
		}

		//释放原有的空间
		delete[] this->m_emparray;

		//更改新空间的指向
		this->m_emparray = newspace;

		//更新新的职工人数
		this->m_empnum = newsize;

		//成功添加后 保存到文件中
		this->save();


		//提示添加成功
		cout << "成功添加" << addnum << "名新职工" << endl;

	}
	else
	{
		cout << "输入数据有误" << endl;
	}

	//按任意键后  清屏回到上级目录
	system("pause");
	system("cls");
}


void workermanager::save()
{
	ofstream ofs;
	ofs.open(filename, ios::out);//用输出方式打开文件--写文件

	//将每个人数据写入到文件中
	for (int i = 0; i < m_empnum; i++)
	{
		ofs << this->m_emparray[i]->m_id << " "
			<< this->m_emparray[i]->m_name << " "
			<< this->m_emparray[i]->m_deptid << endl;
	}

	//关闭文件
	ofs.close();
}


workermanager::~workermanager()
{
	if (this->m_emparray != NULL)
	{
		delete[]this->m_emparray;
		this->m_emparray = NULL;
	}
}