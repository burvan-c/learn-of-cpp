//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
#include"boss.h"
 

boss::boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_deptid = did;
}

//��ʾ������Ϣ
void boss::showinfo()
{
	cout << "ְ����ţ�" << this->m_id
		<< "\tְ��������" << this->m_name
		<< "\t��λ��" << this->getdeptname()
		<< "\t��λְ�𣺹���˾��������" << endl;
}
// ��ȡ��λ����
string boss::getdeptname()
{
	return string("�ܲ�");
}