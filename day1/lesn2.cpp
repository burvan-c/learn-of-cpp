#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>;
using namespace std;
#include<string>
#include<stdio.h>


//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct stu s1;
//	//struct stu s1={"张三",18,100};
//	//定义结构体时直接初始化
//	s1.name = "张三";
//	s1.age = 18;
//	s1.score = 100;
//	cout << "姓名：" << s1.name << "年纪：" << s1.age << "分数：" << s1.score;
//
//
//	system("pause");
//	return 0;
//}



//结构体数组
//struct  结构体名   数组名【元素个数】={{}，{}，。。。}
// 
//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	//结构体数组初始化
//	struct stu stary[3] =
//	{
//		{"张三",10,100},
//		{"李四",14,95},
//		{"王五",20,30},
//	};
//
//	//结构体数组元素重新赋值
//	stary[2].name = "赵四";
//	stary[2].age = 60;
//	stary[2].score = 66;
//
//	for (int i = 0; i < 3; i++)
//	{
//		cout << stary[i].name <<"\t"<< stary[i].age << "\t" << stary[i].score;
//		cout << endl;
//	}
//
//
//
//
//	system("pause");
//	return 0;
//}



////结构体指针
//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//int main()
//{
//	struct stu s1={"张三",18,100};
//	stu* p = &s1;
//	cout << p->name << '\t' << p->age << "\t" << p->score << endl;
//	//用箭头访问指针成员
//	system("pause");
//	return 0;
//}



////嵌套结构体
//struct stu
//{
//	string name;
//	int age;
//	int score;
//};
//struct tea
//{
//	int id;
//	string name;
//	int age;
//	struct stu s1;
//};
//
//int main()
//{
//	tea t;
//	t.age = 200;
//	t.id = 123456;
//	t.name = "大傻";
//	t.s1.age = 10;
//	t.s1.name= "二傻";
//	t.s1.score = 100;
//	cout << t.age << "\t" << t.id << "\t" << t.name << endl << t.s1.age << "\t" << t.s1.name << "\t" << t.s1.score << endl;
//	system("pause");
//	return 0;
//}



//结构体函数
struct stu
{
	string name;
	int age;
	int score;
};
void printstudent(struct stu*ps)//加上const后就不可更改了
{
	ps->name = "李四";
	cout << ps->name << "\t" << ps->age << "\t" << ps->score << endl;
}
//函数若采用值传递,调用函数改变name age score时,主函数s1不变（在不同的存储区域内）
//函数若采用地址传递，调用函数改变name age score时主函数也会变化
int main()
{
	struct stu s1 = { "张三",18,100 };
	printstudent(&s1);
	cout << s1.name << "\t" << s1.age << "\t" << s1.score << endl;
	system("pause");
	return 0;
}