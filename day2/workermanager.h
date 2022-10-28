//#define _CRT_SECURE_NO_WARNINGS 1
#pragma once//防止头文件重复包含
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

	//记录职工人数
	int m_empnum;

	//职工数组指针
	worker** m_emparray;

	//添加职工
	void add_emp();

	//保存文件
	void save();

	~workermanager();
};