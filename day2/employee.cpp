//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once


#include"employee.h"

employee::employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

//��ʾ������Ϣ
void employee::showinfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ��������" << this->m_name
		<< "\t��λ��" << this->getdeptname()
		<< "\t��λְ�����Ա������" << endl;
}

// ��ȡ��λ����
string employee::getdeptname()
{
	return string("Ա��");
}