//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once

#include<iostream>
#include"workermanager.h"
using namespace std;

//#include"worker.h"
//#include"employee.h"
//#include"manager.h"
//#include"boss.h"

int main()
{
	////测试代码
	//worker* worker = NULL;
	//worker = new employee(1, "张三", 1);
	//worker->showinfo();
	//delete worker;

	//worker = new manager(2, "李四", 2);
	//worker->showinfo();
	//delete worker;

	//worker = new boss(3, "王五", 3);
	//worker->showinfo();
	//delete worker;




	//实例化对象
	workermanager wm;

	int choice = 0;//存储用户的选项

	while (true)
	{
		//调用函数
		wm.show_menu();

		cout << "输入数字：" << endl;
		cin >> choice;//接收用户数字

		switch (choice)
		{
		case 0://退出
			wm.exitsystem();
			break;
		case 1://增加
			break;
		case 2://显示
			break;
		case 3://删除
			break;
		case 4://修改
			break;
		case 5://查找
			break;
		case 6://排序
			break;
		case 7://清空
			break;
		default:
			system("cls");//清屏
			break;
		}
	}
	


	system("pause");
	return 0;
}