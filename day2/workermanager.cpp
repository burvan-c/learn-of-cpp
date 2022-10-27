//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//ְ������ϵͳ

#include"workermanager.h"
workermanager::workermanager()
{
	//��ʼ������
	this->m_empnum = 0;
	this->m_emparray = NULL;
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

//���ְ��
void workermanager::add_emp()
{
	cout << "�������ְ������" << endl;

	int addnum = 0;//�����û�����������

	cin >> addnum;
	if (addnum > 0)
	{
		//���
		//������ӿռ��С
		int newsize = this->m_empnum + addnum;

		//�����¿ռ�
		worker** newspace = new worker * [newsize];

		//��ԭ���ռ��µ����ݣ��������¿ռ���
		if (this->m_emparray != NULL)
		{
			for (int i = 0; i < this->m_empnum; i++)
			{
				newspace[i] = this->m_emparray[i];
			}
		}

		//�������������
		for (int i = 0; i < addnum; i++)
		{
			int id;//ְ�����
			string name;//ְ������
			int dselect;//����ѡ��

			cout << "�������" << i + 1 << "��ְ���ı�ţ�" << endl;
			cin >> id;

			cout << "�������" << i + 1 << "��ְ����������" << endl;
			cin >> name;

			cout << "��ѡ���ְ���ĸ�λ��" << endl;
			cout << "1����ְͨ��" << endl;
			cout << "2������" << endl;
			cout << "3���ϰ�" << endl;
			cin >> dselect;

			worker* worker = NULL;
			switch (dselect)
			{
			case 1:
				worker = new employee(id, name, 1);
			case 2:
				worker = new manager(id, name, 3);
			case 3:
				worker = new boss(id, name, 3);
			default:
				break;
			}

			//������ְ��ְ�𱣴浽������
			newspace[this->m_empnum + i] = worker;
		}

		//�ͷ�ԭ�еĿռ�
		delete[] this->m_emparray;

		//�����¿ռ��ָ��
		this->m_emparray = newspace;

		//�����µ�ְ������
		this->m_empnum = newsize;

		//�ɹ���Ӻ� ���浽�ļ���

		//��ʾ��ӳɹ�
		cout << "�ɹ����" << addnum << "����ְ��" << endl;

	}
	else
	{
		cout << "������������" << endl;
	}

	//���������  �����ص��ϼ�Ŀ¼
	system("pause");
	system("cls");
}



workermanager::~workermanager()
{

}