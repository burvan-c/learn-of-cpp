#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include<stdio.h>
#include<string>


struct Hero
{
	string name;
	int age;
	string sex;
};
void bubbleSort(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heroArray[j].age > heroArray[j + 1].age)
			{
				struct Hero tmp = heroArray[j];
				heroArray[j] = heroArray[j + 1];
				heroArray[j + 1] = tmp;
			}
		}
	}
}
void printHero(struct Hero heroArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroArray[i].name << "\t年龄："
			<< heroArray[i].age << "\t性别：" << heroArray[i].sex << endl;
	}
}
int main()
{
	//1.设计英雄结构体
	//2.存放5名英雄
	struct Hero heroArray[5] =
	{
		{"刘备",30,"男"},
		{"关羽",24,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",18,"女"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "排序前" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "姓名：" << heroArray[i].name << "\t年龄："
			<< heroArray[i].age<< "\t性别：" << heroArray[i].sex << endl;
	}

	//3.排序
	bubbleSort(heroArray, len);

	//打印
	cout << endl << "排序后" << endl;
	printHero(heroArray, len);



	system("pause");
	return 0;
}