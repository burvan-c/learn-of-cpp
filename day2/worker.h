//#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include<string>

//ְ��������
class worker
{
public:
	//��ʾ������Ϣ
	virtual void showinfo() = 0;
	// ��ȡ��λ����
	virtual string getdeptname() = 0;
	//ְ�����
	int m_id;
	//ְ������
	string m_name;
	//���ű��
	int m_deptid;
};