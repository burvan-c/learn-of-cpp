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
		cout << "������" << heroArray[i].name << "\t���䣺"
			<< heroArray[i].age << "\t�Ա�" << heroArray[i].sex << endl;
	}
}
int main()
{
	//1.���Ӣ�۽ṹ��
	//2.���5��Ӣ��
	struct Hero heroArray[5] =
	{
		{"����",30,"��"},
		{"����",24,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",18,"Ů"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	cout << "����ǰ" << endl;
	for (int i = 0; i < len; i++)
	{
		cout << "������" << heroArray[i].name << "\t���䣺"
			<< heroArray[i].age<< "\t�Ա�" << heroArray[i].sex << endl;
	}

	//3.����
	bubbleSort(heroArray, len);

	//��ӡ
	cout << endl << "�����" << endl;
	printHero(heroArray, len);



	system("pause");
	return 0;
}