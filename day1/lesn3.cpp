//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//#include<iostream>
//using namespace std;
//#include<stdio.h>
//#include<string.h>
//#include<time.h>
//
//
//struct Student
//{
//	string sName;
//	int score;
//};
//struct Teacher
//{
//	string tName;
//	struct Student sArray[5];
//};
//void allocateSpace(struct Teacher tArray[], int len)
//{
//	string nameSeed = "ABCDE";
//	for (int i = 0;i < len; i++)
//	{
//		tArray[i].tName = "Teacher_";
//		tArray[i].tName += nameSeed;
//		
//		for (int j = 0; j < 5; j++)
//		{
//			tArray[i].sArray[j].sName = "Student_";
//			tArray[i].sArray[j].sName += nameSeed;
//			int random = rand() % 61 + 40;        //ע��rand��λ��
//			tArray[i].sArray[j].score = random;
//		}
//	}
//}
//void printinfo(struct Teacher tArray[], int len)
//{
//	for (int i = 0; i < len; i++)
//	{
//		cout << "��ʦ���֣�" << tArray[i].tName << endl;
//		for (int j = 0; j < 5; j++)
//		{
//			cout << "\tѧ�����֣�" << tArray[i].sArray[j].sName <<
//				"  ���Է�����" << tArray[i].sArray[j].score << endl;
//		}
//
//	}
//}
//int main()
//{
//	
//	//������ʦ����
//	struct Teacher tArray[3];
//
//	//��ֵ
//	int len = sizeof(tArray) / sizeof(tArray[0]);
//	srand((unsigned int)time(NULL));
//	
//	
//	allocateSpace(tArray, len);
//
//	//��ӡ
//	printinfo(tArray, len);
//
//
//	system("pause");
//	return 0;
//}