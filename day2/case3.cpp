//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once

#include<iostream>
#include"case3.h"
using namespace std;

int main()
{
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