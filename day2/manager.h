//#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

//经理类
class manager :public worker
{
public:
	manager(int id, string name, int did);

	//显示个人信息
	virtual void showinfo();
	// 获取岗位名称
	virtual string getdeptname();
};