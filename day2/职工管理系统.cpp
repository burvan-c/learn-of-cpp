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
	////���Դ���
	//worker* worker = NULL;
	//worker = new employee(1, "����", 1);
	//worker->showinfo();
	//delete worker;

	//worker = new manager(2, "����", 2);
	//worker->showinfo();
	//delete worker;

	//worker = new boss(3, "����", 3);
	//worker->showinfo();
	//delete worker;




	//ʵ��������
	workermanager wm;

	int choice = 0;//�洢�û���ѡ��

	while (true)
	{
		//���ú���
		wm.show_menu();

		cout << "�������֣�" << endl;
		cin >> choice;//�����û�����

		switch (choice)
		{
		case 0://�˳�
			wm.exitsystem();
			break;
		case 1://����
			break;
		case 2://��ʾ
			break;
		case 3://ɾ��
			break;
		case 4://�޸�
			break;
		case 5://����
			break;
		case 6://����
			break;
		case 7://���
			break;
		default:
			system("cls");//����
			break;
		}
	}
	


	system("pause");
	return 0;
}