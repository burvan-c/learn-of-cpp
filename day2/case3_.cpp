//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//ְ������ϵͳ

#include"case3.h"
workermanager::workermanager()
{

}
workermanager::~workermanager()
{

}

void workermanager::show_menu()//չʾ�˵�
{
	cout << "0.�˳��������" << endl;
	cout << "1.����ְ����Ϣ" << endl;
	cout << "2.��ʾְ����Ϣ" << endl;
	cout << "3.ɾ����ְְ��" << endl;
	cout << "4.�޸�ְ����Ϣ" << endl;
	cout << "5.����ְ����Ϣ" << endl;
	cout << "6.���ձ������" << endl;
	cout << "7.��������ĵ�" << endl;
	cout << endl;
}

void workermanager::exitsystem()
{
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);//�˳�����
}

