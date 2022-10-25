//#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

//老板类
class boss :public worker
{
public:
	boss(int id, string name, int did);

	//显示个人信息
	virtual void showinfo();
	// 获取岗位名称
	virtual string getdeptname();
};