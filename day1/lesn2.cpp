#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>;
using namespace std;
#include<string>
#include<stdio.h>


struct stu
{
	string name;
	int age;
	int score;
};
int main()
{
	struct stu s1;
	//struct stu s1={"张三",18,100};
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名：" << s1.name << "年纪：" << s1.age << "分数：" << s1.score;


	system("pause");
	return 0;
}