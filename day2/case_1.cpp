//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//#include<iostream>
//using namespace std;
//
////���������--�������������;������ԣ������Ϊ��ȡ���������ж������������Ƿ����
//class Cube
//{
//public:
//	//���û�ȡ�����������
//	void setl(int l)
//	{
//		m_l = l;
//	}
//	int getl()
//	{
//		return m_l;
//	}
//
//	void setw(int w)
//	{
//		m_w = w;
//	}
//	int getw()
//	{
//		return m_w;
//	}
//
//	void seth(int h)
//	{
//		m_h = h;
//	}
//	int geth()
//	{
//		return m_h;
//	}
//
//	int cals()
//	{
//		return 2 * m_l * m_w + 2 * m_w * m_h + 2 * m_l * m_h;
//	}
//
//	int calv()
//	{
//		return m_l * m_h * m_w;
//	}
//
//	//���ó�Ա�����ж��Ƿ����
//	bool issameclass(Cube &c)
//	{
//		if (m_l == c.getl() && m_w == c.getw() && m_h == c.geth())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_l;//��
//	int m_w;//��
//	int m_h;//��
//};
//
////����ȫ�ֺ����ж��Ƿ����
//bool issame(Cube& c1, Cube& c2)
//{
//	if (c1.getl() == c2.getl() && c1.getw() == c2.getw() && c1.geth() == c2.geth())
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//
//int main()
//{
//	//�������������
//	Cube c1;
//	c1.setl(10);
//	c1.setw(10);
//	c1.seth(10);
//
//	cout << "���������" << c1.cals() << endl;
//	cout << "���������" << c1.calv() << endl;
//
//	Cube c2;
//	c2.setl(10);
//	c2.setw(10);
//	c2.seth(10);
//
//	//��ȫ�ֺ����ж�
//	bool ret = issame(c1, c2);
//	if (ret)
//	{
//		cout << "�����������" << endl;
//	}
//	else
//	{
//		cout << "�������������" << endl;
//	}
//
//	//�ó�Ա�����ж�
//	ret = c1.issameclass(c2);
//	if (ret)
//	{
//		cout << "�����������" << endl;
//	}
//	else
//	{
//		cout << "�������������" << endl;
//	}
//
//	system("pause");
//	return 0;
//}