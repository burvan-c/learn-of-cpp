//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once
//#include<iostream>
//using namespace std;
//
////立方体设计--创建立方体的类;设计属性；设计行为获取面积体积；判断两个立方体是否相等
//class Cube
//{
//public:
//	//设置获取长宽高面积体积
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
//	//利用成员函数判断是否相等
//	bool issameclass(Cube &c)
//	{
//		if (m_l == c.getl() && m_w == c.getw() && m_h == c.geth())
//		{
//			return true;
//		}
//		return false;
//	}
//private:
//	int m_l;//长
//	int m_w;//宽
//	int m_h;//高
//};
//
////利用全局函数判断是否相等
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
//	//创建立方体对象
//	Cube c1;
//	c1.setl(10);
//	c1.setw(10);
//	c1.seth(10);
//
//	cout << "立方面积：" << c1.cals() << endl;
//	cout << "立方体积：" << c1.calv() << endl;
//
//	Cube c2;
//	c2.setl(10);
//	c2.setw(10);
//	c2.seth(10);
//
//	//用全局函数判断
//	bool ret = issame(c1, c2);
//	if (ret)
//	{
//		cout << "两个立方相等" << endl;
//	}
//	else
//	{
//		cout << "两个立方不相等" << endl;
//	}
//
//	//用成员函数判断
//	ret = c1.issameclass(c2);
//	if (ret)
//	{
//		cout << "两个立方相等" << endl;
//	}
//	else
//	{
//		cout << "两个立方不相等" << endl;
//	}
//
//	system("pause");
//	return 0;
//}