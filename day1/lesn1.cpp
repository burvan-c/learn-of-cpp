#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<iostream>   //in  out   stream     ���������
using namespace std;   //���������ռ�std�ڶ�������б�ʶ��;��׼���е��������ݶ������������ռ�std��
#include<string>
#include<stdlib.h>
#include<time.h>


//#define Day 7
int main()
{
	//cout << "hello world" << endl;
	////endl--��׼�������������




	////���������﷨:�������� ������=��ʼֵ;
	//int a = 10;
	//cout << "a = " << a << endl;




	////c++���峣����ʽ��(���������޸ģ�
	////1.�곣����#define ������ ����ֵ��ֻ�Ƕ�����ţ�����typedef�������ͣ�
	////2.const��������const �������� ������=����ֵ�����ɸ��ģ�
	//cout << "һ����" << Day << "��" << endl;
	//const int month = 12;
	//cout << "һ����" << month << "��" << endl;



	////�ؼ��֣���ʶ����--����ʹ��
	//int num1 = 2;
	//int num2 = 8;
	//cout << num1 + num2 << endl;



	////���Σ�short--2�ֽڣ�int--4�ֽڣ�long--4�ֽڻ�8�ֽڣ�long long--8�ֽ�
	//short num1_1 = 10;
	//int num2_2 = 10;
	//long num3_3 = 10;
	//long long num4_4 = 10;
	//cout << sizeof(short) << endl;//sizeof(��������/����)--��ռ�ֽڴ�С
	//cout << sizeof(int) << endl;//
	//cout << sizeof(long) << endl;
	//cout << sizeof(long long) << endl;




	////������: float--4�ֽ�   double--8�ֽ�
	//float f1 = 3.14f;//����f��ʾ������
	//double d1 = 3.14;


	////��ѧ������
	//float f2 = 3e-2;
	//cout << f2 << endl;



	////�ַ���--�������ַ���˫�����ַ���
	////char��ռһ���ֽڣ�����Ӧ��ASCIIֵ����洢��Ԫ
	//char ch = 'a';
	//cout << ch << endl<<sizeof(char)<<endl<<(int)ch<<endl;



	////ת���ַ�    \n����   \\��б��   \tˮƽ�Ʊ��(8��λ�ã��ո��룬����Ч��) ..........
	//cout << "hello world\n" << "\\" << endl << "aaa\thello world" << endl;
	//


	////�ַ�����
	////C���char ����������="�ַ���"(���������ַ���)
	////C++���string ������="�ַ���"
	//char str1[] = "hello world";
	//string str2 = "hello world";
	//cout << str1 << endl << str2 << endl;



	////�������� true  false   ռ1���ֽ�
	//bool flag = true;
	//cout << flag << endl << sizeof(bool) << endl;


	////���ݵ��������
	//int b = 0;
	//cin >> b;
	//cout << b << endl;



	////�����



	////ѡ��ṹ
	//int score = 0;
	//cout << "�������:";
	//cin >> score;
	//if (score > 600)       //���治Ҫ�ӷֺ�
	//{
	//	cout << "����һ��" << endl;
	//}
	//else if (score > 500)
	//{
	//	cout <<"���϶���" << endl;
	//}
	//else
	//{
	//	cout << "����Ŭ��" << endl;
	//}



	////Ƕ��if���
	//int score = 0;
	//cin >> score;
	//if (score > 600)
	//{
	//	cout << "һ��" << endl;
	//	if (score > 700)
	//	{
	//		cout << "����" << endl;
	//	}
	//	else if (score > 650)
	//	{
	//		cout << "�廪" << endl;
	//	}
	//	else
	//	{
	//		cout << "�˴�" << endl;
	//	}
	//}
	//else if (score > 500)
	//{
	//	cout << "����" << endl;
	//}
	//else
	//{
	//	cout << "����Ŭ��" << endl;
	//}



	//	//��ֻС�������
//	int a = 0, b = 0, c = 0;
//
//	cout << "aС��������" ;
//		cout << "bС��������" ;
//	cin >> b;
//cin >> a;
//
//
//	cout << "cС��������" ;
//	cin >> c;
//
//	if (a > b)
//	{
//		if (a > c)
//		{
//			cout << "a������" << endl;
//		}
//		else
//		{
//			cout << "c������" << endl;
//		}
//	}
//	else
//	{
//		if (b > c)
//		{
//			cout << "b������" << endl;
//		}
//		else
//		{
//			cout << "c������" << endl;
//		}
//	}



	////��Ŀ�����
	//int a = 10, b = 20, c = 0;
	//c = (a > b ? a : b);
	//cout << c << endl;
	////c++����Ŀ�����Ϊ���������Լ�����ֵ
	//a > b ? a : b = 120;
	//cout << b << endl;


	////switch   case   break   default
	////��Ӱ���
	//int score = 0;	
	//cin >> score;
	//switch(score)
	//{
	//case 10:
	//	cout << "�����Ӱ" << endl;
	//	break;//�˳�ѡ���ѭ�����
	//case 9:
	//	cout << "�����Ӱ" << endl;
	//	break;
	//case 8:
	//	cout << "�õ�Ӱ" << endl;
	//	break;
	//case 7:
	//	cout << "�õ�Ӱ" << endl;
	//	break;
	//case 6:
	//	cout << "һ���Ӱ" << endl;
	//	break;
	//case 5:
	//	cout << "һ���Ӱ" << endl;
	//	break;
	//default:
	//	cout << "��Ƭ" << endl;
	//	break;
	//}
	////switch�ṹ������Ч�ʸߣ��ж�������������һ������



	//whileѭ��
	/*int a = 0;
	while (a < 10)
	{
		cout << a << endl;
		a++;
	}*/
	////������
	//srand((unsigned int)time(NULL));
	//int a = rand() % 100 + 1;//����1--100�����
	////cout << a << endl;
	//int b = 0;
	//while (a)
	//{
	//	cin >> b;
	//	if (a > b)
	//	{
	//		cout << "��С��" << endl;
	//	}
	//	else if (a < b)
	//	{
	//		cout << "�´���" << endl;
	//	}
	//	else
	//	{
	//		cout << "�¶���" << endl;
	//		break;//����ѭ��
	//	}
	//}
	



	////do  whileѭ�����
	//int a = 0;
	//do
	//{
	//	cout << a << endl;
	//	a++;
	//} while (a<10);


	////forѭ��
	////for (int i = 0; i < 10; i++)
	////{
	////	cout << i << endl;
	////}

	//������
	/*for (int i = 1; i <= 100; i++)
	{
		if (i%7==0||i%10==7||i/10==7)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}*/

	//    //��ӡ��ͼ
	//for (int i = 0; i < 10; i++)
	//{
	//	for (int j = 0; j < 10; j++)
	//	{
	//		cout << "* ";
	//	}
	//		cout << endl;
	//}



	////�˷��ھ���
	//for (int i = 1; i <= 9; i++)
	//{
	//	for (int j = 1; j <= i; j++)
	//	{
	//		cout << j << "*" << i << "=" << j * i<<"\t";
	//	}
	//	cout << endl;
	//}


	////��ת���--break  ����case����ѭ�����
	//cout << "ѡ�񸱱��Ѷ�" << endl << "1.��ͨ" << "\t" << "2.�е�" << "\t" << "3.����" << "\n";
	//int select = 0;
	//cin >> select;
	//switch (select)
	//{
	//case 1:
	//	cout << "������ͨ����" << endl;
	//	break;
	//case 2:
	//	cout << "�����еȸ���" << endl;
	//	break;
	//case 3:
	//	cout << "�������Ѹ���" << endl;
	//	break;
	//default:
	//	break;
	//}



	//for (int i = 0; i < 10; i++)
	//{
	//	if (5 == i)
	//	{
	//		break;//����ѭ��
	//	}
	//	cout << i <<" ";
	//}

	//cout << endl;

	//for (int i = 0; i < 10; i++)//��
	//{
	//	for (int j = 0; j < 10; j++)//��
	//	{
	//		if (j == 5)
	//		{
	//			break;
	//		}
	//		cout << "* ";
	//	}
	//	cout << endl;
	//}


	////continue--ִ�е����оͲ���ִ�к�����룬ȥִ����һ��ѭ��
	//for (int i = 0; i < 10; i++)
	//{
	//	if (5 == i)
	//	{
	//		continue; 
	//	}
	//	cout << i << " ";
	//}


	for (int i = 0; i <= 100; i++)
	{
		//���������ż�������
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}


	//goto���




	system("pause");
	//�ڽ���C/C++��̵�ʱ�������г���鿴���Ч��ʱ������ִ�����һ�¾͹رյ����
	//��C++��һ����main�����е�return֮ǰ���system("pause");�����Ϳ��Կ��������Ľ��

	return 0;
}