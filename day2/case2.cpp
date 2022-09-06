//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//#include<iostream>
//using namespace std;
//
//
////点与圆的关系
//// 
//// 点类
//class Point
//{
//public:
//	//设置获取坐标
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
////圆类
//class Circle
//{
//public:
//	//设置获取半径圆心
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
//	int m_r;//半径
//	Point m_center;//圆心
//};
//
////判断点与圆的关系
//void isincirrcle(Circle &c,Point &p)
//{
//	//计算两点距离平方
//	int distance = (c.getcenter().getx() - p.getx()) * (c.getcenter().getx() - p.getx()) +
//		(c.getcenter().gety() - p.gety()) * (c.getcenter().gety() - p.gety());
//	//计算半径平方
//	int rdistance = c.getr() * c.getr();
//	//判断关系
//	if (distance == rdistance)
//	{
//		cout << "点在圆上" << endl;
//	}
//	else if (distance > rdistance)
//	{
//		cout << "点在圆外" << endl;
//	}
//	else
//	{
//		cout << "点在圆内" << endl;
//	}
//}
//
//int main()
//{
//	//创建圆与点
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
//	//判断关系
//	isincirrcle(c, p);
//
//	system("pause");
//	return 0;
//}