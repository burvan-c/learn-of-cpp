//#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

//������
class manager :public worker
{
public:
	manager(int id, string name, int did);

	//��ʾ������Ϣ
	virtual void showinfo();
	// ��ȡ��λ����
	virtual string getdeptname();
};