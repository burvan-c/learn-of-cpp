#define _CRT_SECURE_NO_WARNINGS 1
#pragma once

#include<iostream>
using namespace std;

////new������--���ٶ������ݣ���delete�������ͷ�
//int* func()
//{
//	//new���ص��Ǹ��������͵�ָ��
//	int* p = new int(10);
//	return p;
//}
//
//void test01()
//{
//	int* p = func();
//	cout << *p << endl;
//	//�����������ɳ���Ա���������ͷţ���delete�ͷ�
//	delete p;
//	//cout << *p << endl;//Ұָ��
//
//}
//
//
////�ڶ�������new��������
//void test02()
//{
//	int* arr = new int[10];//������10��Ԫ��
//	for (int i = 0; i < 10; i++)
//	{
//		*(arr + i) = i + 100;
//		cout << *(arr + i) << endl;
//	}
//
//	//�ͷŶ�������
//	delete[]arr;
//}
//
//
//int main()
//{
//	//test01();
//
//	test02();
//
//	system("pause");
//	return 0;
//}




////����--�����������
////�������� &����=ԭ��
//int main()
//{
//	int a = 10;
//	int& b = a;
//	cout << a << endl << b << endl;
//	b = 120;
//	cout << a << endl << b << endl;
//	//������ԭ���������޸Ĵ洢������
//
//	//ע��������ñ����ʼ������ʼ���󲻿ɸ���
//
//	system("pause");
//	return 0;
//}




////��������������
////ֵ����
//void myswap01(int a, int b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
////��ַ����
//void myswap02(int *a, int *b)
//{
//	int tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//
////���ô���
//void myswap03(int &a, int &b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//myswap01(a,b);//ֵ���ݲ��ı�ʵ��
//
//	//myswap02(&a, &b);//��ַ���ݿ��Ըı�ʵ��
//
//	myswap03(a, b);//���ô���Ҳ���Ըı�ʵ�Σ��൱����������ñ����ı�ʵ��
//
//	cout << a << endl << b << endl;
//	system("pause");
//	return 0;
//}



////��������������ֵ--��Ҫ���ؾֲ�����������ֵ���ᱻ�ͷţ����������ÿ���Ϊ��ֵ
//int& test()//��������+������
//{
//	static int a = 10;//��̬������ȫ�������ڳ����������ͷ�
//	return a;//����a������
//}
//int main()
//{
//	int& ref = test();//test()�൱��a,refΪ����
//	cout << ref << endl;
//	cout << ref << endl;
//
//	test() = 1000;//���������ص����������ã��������ÿ���Ϊ��ֵ
//
//	cout << ref << endl;
//	cout << ref << endl;
//
//	
//
//	system("pause");
//	return 0;
//}



//���õı�����ָ�볣��





////��������const--��Ҫ�����βη�ֹ���--����const���Ϊֻ�����������޸�
//void showvalue(const int& val)
//{
//	//val = 1000;����
//	cout << val << endl;
//}
//int main()
//{
//	int a = 100;
//	showvalue(a);
//
//	cout << a << endl;
//
//
//	system("pause");
//	return 0;
//}



////����Ĭ�ϲ���
////���к�����������λ�ÿ���������ã����������뺯��ʵ��ֻ��һ����Ĭ�ϲ���
//int func(int a, int b=12, int c=13)//b c������Ĭ��ֵ
//{
//	return a + b + c;
//}
//int main()
//{
//	cout << func(10,30) << endl;//���Ȳ���ʵ�δ��ݵ�ֵ
//
//	system("pause");
//	return 0;
//}




////����ռλ����--����ֵ���� ������ ���������ͣ�
////ռλ����Ҳ������Ĭ��ֵ--int=10
//void func(int a, int)//�����intΪռλ����
//{
//	cout << "func" << endl;
//}
//int main()
//{
//	func(10, 20);//��û��Ĭ��ֵ��ռλ�������봫ֵ
//
//	system("pause");
//	return 0;
//}



////��������--������������ͬ����߸�����
////��������--ͬһ�����򣻺���������ͬ���������������ͻ������˳��ͬ
////��������ֵ��������Ϊ�������ص�����
//void func()
//{
//	cout << "func�ĵ���" << endl;
//}
//void func(int a)
//{
//	cout << "func(int a)�ĵ���" << endl;
//}
//void func(double a)
//{
//	cout << "func(double a)�ĵ���" << endl;
//}
//void func(int a, double b)
//{
//	cout << "func(int a, double b)�ĵ���" << endl;
//}
//void func(double a, int b)
//{
//	cout << "func(double a, int b)�ĵ���" << endl;
//}
//int main()
//{
//	func();
//	func(10);
//	func(3.14);
//	func(10, 3.14);
//	func(3.14, 10);
//
//	system("pause");
//	return 0;
//}



//��������ע������
//1.������Ϊ��������
void func(int &a)
{
	cout << "func(int &a)�ĵ���" << endl;
}
void func(const int& a)
{
	cout << "func(const int &a)�ĵ���" << endl;
}

//������������Ĭ�ϲ���
void func2(int a)
{
	cout << "func2(int a)�ĵ���" << endl;
}
void func2(int a,int b=10)
{
	cout << "func2(int a,int b)�ĵ���" << endl;
}
int main()
{
	func(10);//10Ϊ����
	int a = 11;
	func(a);//aΪ����

	//func2(a);//��ʱ������������Ĭ�ϲ��������ֶ�����


	system("pause");
	return 0;
}