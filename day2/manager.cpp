//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
#include"manager.h"
 

manager::manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

//��ʾ������Ϣ
void manager::showinfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ��������" << this->m_name
		<< "\t��λ��" << this->getdeptname()
		<< "\t��λְ���·������Ա��" << endl;
}
// ��ȡ��λ����
string manager::getdeptname()
{
	return string("����");
}