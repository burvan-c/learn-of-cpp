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
	//struct stu s1={"����",18,100};
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;
	cout << "������" << s1.name << "��ͣ�" << s1.age << "������" << s1.score;


	system("pause");
	return 0;
}