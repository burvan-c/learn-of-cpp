//#define _CRT_SECURE_NO_WARNINGS 1
#pragma once//��ֹͷ�ļ��ظ�����
#include<iostream>
using namespace std;
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"

#include<fstream>
#define filename "empfille.txt"



class workermanager
{
public:
	workermanager();

	void show_menu();

	void exitsystem();

	//��¼ְ������
	int m_empnum;

	//ְ������ָ��
	worker** m_emparray;

	//���ְ��
	void add_emp();

	//�����ļ�
	void save();

	~workermanager();
};