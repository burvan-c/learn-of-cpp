#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<iostream>
using namespace std;

//new操作符--开辟堆区数据，用delete操作符释放
int* fun()
{
	int* p = new int(10);
}
