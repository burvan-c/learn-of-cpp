//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//#include<iostream>
//using namespace std;
//
//
////����Բ�Ĺ�ϵ
//// 
//// ����
//class Point
//{
//public:
//	//���û�ȡ����
//	void setx(int x)
//	{
//		m_x = x;
//	}
//	int getx()
//	{
//		return m_x;
//	}
//
//	void sety(int y)
//	{
//		m_y = y;
//	}
//	int gety()
//	{
//		return m_y;
//	}
//
//private:
//	int m_x;
//	int m_y;
//};
//
////Բ��
//class Circle
//{
//public:
//	//���û�ȡ�뾶Բ��
//	void setr(int r)
//	{
//		m_r = r;
//	}
//	int getr()
//	{
//		return m_r;
//	}
//
//	void setcenter(Point center)
//	{
//		m_center = center;
//	}
//	Point getcenter()
//	{
//		return m_center;
//	}
//
//private:
//	int m_r;//�뾶
//	Point m_center;//Բ��
//};
//
////�жϵ���Բ�Ĺ�ϵ
//void isincirrcle(Circle &c,Point &p)
//{
//	//�����������ƽ��
//	int distance = (c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
//		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
//	//����뾶ƽ��
//	int rdistance = c.getr() * c.getr();
//	//�жϹ�ϵ
//	if (distance == rdistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else if (distance > rdistance)
//	{
//		cout << "����Բ��" << endl;
//	}
//	else
//	{
//		cout << "����Բ��" << endl;
//	}
//}
//
//int main()
//{
//	//����Բ���
//	Circle c;
//	c.setr(10);
//	Point center;
//	center.setx(10);
//	center.sety(0);
//	c.setcenter(center);
//
//	Point p;
//	p.setx(10);
//	p.sety(10);
//
//	//�жϹ�ϵ
//	isincirrcle(c, p);
//
//	system("pause");
//	return 0;
//}