#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<iostream>   //in  out   stream     ���������
using namespace std;   //���������ռ�std�ڶ�������б�ʶ��;��׼���е��������ݶ������������ռ�std��



#define Day 7
int main()
{
	cout << "hello world" << endl;
	//endl--��׼�������������




	//���������﷨:�������� ������=��ʼֵ;
	int a = 10;
	cout << "a = " << a << endl;




	//c++���峣����ʽ��(���������޸ģ�
	//1.�곣����#define ������ ����ֵ��ֻ�Ƕ�����ţ�����typedef�������ͣ�
	//2.const��������const �������� ������=����ֵ�����ɸ��ģ�
	cout << "һ����" << Day << "��" << endl;
	const int month = 12;
	cout << "һ����" << month << "��" << endl;



	//�ؼ��֣���ʶ����--����ʹ��
	int num1 = 2;
	int num2 = 8;
	cout << num1 + num2 << endl;



	//���Σ�short--2�ֽڣ�int--4�ֽڣ�long--4�ֽڻ�8�ֽڣ�long long--8�ֽ�
	short num1_1 = 10;
	int num2_2 = 10;
	long num3_3 = 10;
	long long num4_4 = 10;
	cout << sizeof(short) << endl;//sizeof(��������/����)--��ռ�ֽڴ�С
	cout << sizeof(int) << endl;//
	cout << sizeof(long) << endl;
	cout << sizeof(long long) << endl;




	//������: float--4�ֽ�   double--8�ֽ�
	float f1 = 3.14f;//����f��ʾ������
	double d1 = 3.14;


	//��ѧ������
	float f2 = 3e-2;
	cout << f2 << endl;



	system("pause");
	//�ڽ���C/C++��̵�ʱ�������г���鿴���Ч��ʱ������ִ�����һ�¾͹رյ����
	//��C++��һ����main�����е�return֮ǰ���system("pause");�����Ϳ��Կ��������Ľ��

	return 0;
}