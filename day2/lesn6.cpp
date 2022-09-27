//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once

#include<iostream>
using namespace std;
#include<string>
#include<fstream>


//继承

//class java
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登入、注册……" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……" << endl;
//	}
//	void left()
//	{
//		cout << "c++、python、java……"<<endl;
//	}
//	void content()
//	{
//		cout << "java视频" << endl;
//	}
//};
//class python
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登入、注册……" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……" << endl;
//	}
//	void left()
//	{
//		cout << "c++、python、java……" << endl;
//	}
//	void content()
//	{
//		cout << "pytnon视频" << endl;
//	}
//};
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登入、注册……" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……" << endl;
//	}
//	void left()
//	{
//		cout << "c++、python、java……" << endl;
//	}
//	void content()
//	{
//		cout << "c++视频" << endl;
//	}
//};


//继承实现页面

//class basepage//公共页面类
//{
//public:
//	void header()
//	{
//		cout << "首页、公开课、登入、注册……" << endl;
//	}
//	void footer()
//	{
//		cout << "帮助中心、交流合作、站内地图……" << endl;
//	}
//	void left()
//	{
//		cout << "c++、python、java……" << endl;
//	}
//};
//
////继承可以减少重复代码
////语法：class 子类 ：继承方式 父类
////子类也叫派生类，父类也叫基类
//
//class java :public basepage
//{
//public:
//	void content()
//	{
//		cout << "java视频" << endl;
//	}
//};
//class python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "python视频" << endl;
//	}
//};
//class cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "cpp视频" << endl;
//	}
//};
//void test01()
//{
//	cout << "java学习页面" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "-----------------------" << endl;
//
//	cout << "python学习页面" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "-----------------------" << endl;
//
//	cout << "c++学习页面" << endl;
//	cpp cpp;
//	cpp.header();
//	cpp.footer();
//	cpp.left();
//	cpp.content();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



////继承方式--公共继承、保护继承、私有继承
//
////公共继承
//class base1
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son1 :public base1
//{
//public:
//	void func()
//	{
//		m_a = 10;//父类中的公共权限成员到子类中依然是公共权限
//		m_b = 10;//父类中的保护权限成员到子类中依然是保护权限
//		//m_c = 10;//父类中的私有权限成员到子类中无法访问
//	}
//};
//void test01()
//{
//	son1 s1;
//	s1.m_a = 100;//公共权限可以在类外访问
//	//s1.m_b = 100;//保护权限在类外不可防问
//}
//
//
////保护继承
//
//class base2
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son2 :protected base2
//{
//public:
//	void func()
//	{
//		m_a = 100;//父类中公共成员，到子类变为保护权限
//		m_b = 100;//父类中保护成员，到子类变为保护权限
//		//m_c = 100;//父类私有成员子类无法访问
//	}
//};
//void test02()
//{
//	son2 s2;
//	//s2.m_a = 100;//变为保护权限，类外无法访问
//	//s2.m_b = 100;//保护权限，无法访问
//	//s2.m_c = 100;//私有权限，无法访问
//}
//
//
////私有继承
//
//class base3
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son3 :private base3
//{
//public:
//	void func()
//	{
//		m_a = 100;//父类中公共成员，到子类变为私有权限
//		m_b = 100;//父类中保护成员，到子类变为私有权限
//		//m_c = 100;//父类私有成员，子类无法访问
//	}
//};
//void test03()
//{
//	son3 s3;
//	//s3.m_a = 190;//私有权限，类外无法访问
//	//s3.m_b = 190;//私有权限，类外无法访问
//	//s3.m_c = 190;//私有权限，类外无法访问
//}
//class grandson3 :public son3
//{
//public:
//	void func()
//	{
//		//m_a = 100;//子类私有权限，孙子类无法访问
//	}
//};




//继承中的对象模型

//class base
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//class son :public base
//{
//public:
//	int m_d;
//};
//
//void test01()
//{
//	//父类中非静态成员属性都会被子类继承
//	//私有属性被隐藏无法访问
//	cout << sizeof(son) << endl;//16
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//继承中构造与析构顺序

//class base
//{
//public:
//	base()
//	{
//		cout << "base构造函数" << endl;
//	}
//	~base()
//	{
//		cout << "base析构函数" << endl;
//	}
//};
//
//class son :public base
//{
//public:
//	son()
//	{
//		cout << "son构造函数" << endl;
//	}
//	~son()
//	{
//		cout << "son析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	//base b;
//	//先构造父类，后构造子类；析构与其相反
//	son s;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//继承同名成员处理方式--子类与父类同名
//直接访问子类同名成员；访问父类需加作用域

//class base
//{
//public:
//	base()
//	{
//		m_a = 20;
//	}
//	void func()
//	{
//		cout << "base->func调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "son->func(int a)调用" << endl;
//	}
//	int m_a;
//	int m_a;
//};
//class son :public base
//{
//public:
//	son()
//	{
//		m_a = 30;
//	}
//	void func()
//	{
//		cout << "son->func调用" << endl;
//	}
//	
//};
//void test01()
//{
//	son s;
//	cout << s.m_a << endl;//子类直接访问
//
//	cout << s.base::m_a << endl;//同名时父类要加上作用域
//}
//void test02()
//{
//	son s;
//	s.func();//子类直接访问
//
//	s.base::func();//同名时父类要加上作用域
//
//	//s.func(100);//这里子类会隐藏所有父类的同名函数
//	s.base::func(100);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//继承 同名静态成员处理方式
//直接访问子类同名成员；访问父类需加作用域

//class base
//{
//public:
//	static int m_a;//类内申明，类外初始化
//	static void func()
//	{
//		cout << "base-static void func()" << endl;
//	}
//};
//int base::m_a = 20;
//
//class son:public base
//{
//public:
//	static int m_a;
//	static void func()
//	{
//		cout << "son-static void func()" << endl;
//	}
//};
//int son::m_a = 300;
//
////同名静态成员属性
//void test01()
//{
//	son s;
//	//通过对象访问
//	cout << s.m_a << endl;
//	cout << s.base::m_a << endl;
//
//	//通过类名访问
//	cout << son::m_a << endl;
//	cout << son::base::m_a << endl;
//}
//
////同名静态成员函数
//void test02()
//{
//	son s;
//	//通过对象访问
//	s.func();
//	s.base::func();
//
//	//通过类名访问
//	son::func();
//	son::base::func();
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//多继承语法--允许一个类继承多个类
//class 子类：继承方式 父类1，继承方式 父类2……
//父类有同名时需加作用域

//class base1
//{
//public:
//	base1()
//	{
//		m_a = 20;
//	}
//	int m_a;
//};
//class base2
//{
//public:
//	base2()
//	{
//		m_a = 60;
//	}
//	int m_a;
//};
//class son :public base1, public base2
//{
//public:
//	son()
//	{
//		m_c = 30;
//		m_d = 40;
//	}
//	int m_c;
//	int m_d;
//};
//void test01()
//{
//	son s;
//	cout << sizeof(s) << endl;
//	cout << s.base1::m_a << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//菱形继承--同一个基类继承给两个派生类，再继承给另一个类

//class animal
//{
//public:
//	int m_a;
//};
////虚继承解决问题
//class sheep :virtual public animal//此时animal为虚基类
//{};
//class tuo:virtual public animal
//{};
//class sheeptuo :public sheep, public tuo
//{};
//void test01()
//{
//	sheeptuo st;
//	st.sheep::m_a = 18;
//	st.tuo::m_a = 20;
//	cout << st.sheep::m_a << endl;
//	cout << st.tuo::m_a << endl;
//	//菱形继承会导致资源浪费，可利用虚继承解决
//	cout << st.m_a << endl;
//	//虚继承后相当于共用一个数据
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}







//多态
//静态多态（函数重载、运算符重载）
//动态多态

//动态多态满足条件：
//1.有继承关系
//2.子类重写父类的虚函数（重写：函数返回值类型 函数名 参数 完全相同）

//动态多态使用
//1.父类的指针或引用 执行子类对象

//class animal
//{
//public:
//	/*void speak()    //对应  地址早绑定
//	{
//		cout << "动物说话" << endl;
//	}*/
//
//	//虚函数
//
//	virtual void speak()    //对应  地址晚绑定
//	{
//		cout << "动物说话" << endl;
//	}
//	//虚函数指针->虚函数表->记录虚函数地址
//};
//
//class cat :public animal
//{
//public:
//	 void speak()
//	{
//		cout << "喵喵" << endl;
//	}
//};
//
////执行函数
//void dospeak(animal& animal)//animal&animal=cat c
//{    //这里地址早绑定，在编译阶段已确定函数地址，用animal类中的speak函数
//	animal.speak();
//}
//
//void test01()
//{
//	cat c;
//	dospeak(c);
//	//想要执行cat中的speak函数，必须地址晚绑定，在animal中执行virtual void speak()
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//多态案列--计算器类
//普通写法、多态写法

//普通写法
//class calculator
//{
//public:
//	int getresult(string oper)
//	{
//		if ("+" == oper)
//		{
//			return m_num1 + m_num2;
//		}
//		else if ("-" == oper)
//		{
//			return m_num1 - m_num2;
//		}
//		else if ("*" == oper)
//		{
//			return m_num1 * m_num2;
//		}
//	}
//
//	int m_num1;
//	int m_num2;
//};
//void test01()
//{
//	calculator c;
//	c.m_num1 = 10;
//	c.m_num2 = 20;
//
//	cout << c.getresult("+") << endl;
//	cout << c.getresult("-") << endl;
//	cout << c.getresult("*") << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//利用多态实现计算器--组织清晰、可读性强、易于维护

//实现计算器抽象类
//class abstractcalculator
//{
//public:
//	virtual int getresult()
//	{
//		return 0;
//	}
//	int m_num1;
//	int m_num2;
//};
//
////加法计算器类
//class addcalculator :public abstractcalculator
//{
//public:
//	int getresult()//virtual关键字可写可不写
//	{
//		return m_num1+m_num2;
//	}
//};
//
////减法计算器类
//class subcalculator :public abstractcalculator
//{
//public:
//	int getresult()//virtual关键字可写可不写
//	{
//		return m_num1 - m_num2;
//	}
//};
//
////乘法计算器类
//class mulcalculator :public abstractcalculator
//{
//public:
//	int getresult()//virtual关键字可写可不写
//	{
//		return m_num1 * m_num2;
//	}
//};
//
//void test02()
//{
//	abstractcalculator* abc = new addcalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 20;
//	cout << abc->getresult() << endl;
//	//堆区--手动销毁new
//	delete abc;
//
//	abc = new subcalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 20;
//	cout << abc->getresult() << endl;
//
//	abc = new mulcalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 20;
//	cout << abc->getresult() << endl;
//}
//
//int main()
//{
//	test02();
//	system("pause");
//	return 0;
//}



//纯虚函数、抽象类
//纯虚函数语法：viryual 返回值类型 函数名 （参数）=0；
//类中有了纯虚函数，被称为抽象类--无法实例化对象、子类必须重写抽象类中的纯虚函数

//class base//抽象类
//{
//public:
//	virtual void func() = 0;//纯虚函数
//};
//class son :public base
//{
//public:
//	virtual void func() 
//	{
//		cout << "func函数的调用" << endl;
//	};
//};
//void test01()
//{
//	//son s;//子类要重写虚函数，否则无法实例化对象
//	base* ba = new son;
//	ba->func();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//多态实现案例

//class abstractdrinking
//{
//public:
//	//煮水
//	virtual void boil() = 0;
//
//	//冲泡
//	virtual void brew() = 0;
//
//	//倒入
//	virtual void pourincup() = 0;
//
//	//加辅料
//	virtual void putsomething() = 0;
//
//	//制作饮料
//	void makedrink()
//	{
//		boil();
//		brew();
//		pourincup();
//		putsomething();
//	}
//};
////制作咖啡
//class coffee :public abstractdrinking
//{
//public:
//	//煮水
//	void boil()
//	{
//		cout << "煮水" << endl;
//	}
//
//	//冲泡
//	virtual void brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//
//	//倒入
//	virtual void pourincup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加辅料
//	virtual void putsomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
////制作茶
//class tea :public abstractdrinking
//{
//public:
//	//煮水
//	void boil()
//	{
//		cout << "煮水" << endl;
//	}
//
//	//冲泡
//	virtual void brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//
//	//倒入
//	virtual void pourincup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//
//	//加辅料
//	virtual void putsomething()
//	{
//		cout << "加入枸杞" << endl;
//	}
//};
////制作函数
//void dowork(abstractdrinking* abs)//abstractdrinking* abs=new coffee
//{
//	abs->makedrink();
//	delete abs;
//}
//void test01()
//{
//	//制作咖啡
//	dowork(new coffee);
//	dowork(new tea);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//虚析构与纯虚析构

//class animal
//{
//public:
//	animal()
//	{
//		cout << "animal构造函数调用" << endl;
//	}
//
//	//virtual ~animal()//这里改为虚析构才不会导致内存泄露
//	//{
//	//	cout << "animal虚析构函数调用" << endl;
//	//}
//	
//	//纯虚析构函数也可以解决内存泄露问题
//	virtual ~animal() = 0;
//
//	//纯虚函数
//	virtual void speak() = 0;
//
//};
//animal::~animal()
//{
//	cout << "animal纯虚析构函数调用" << endl;
//
//}
//class cat :public animal
//{
//public:
//	cat(string name)
//	{
//		cout << "cat构造函数调用" << endl;
//		m_name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << "喵喵" << endl;
//	}
//	~cat()
//	{
//		if (m_name != NULL)
//		{
//			cout << "cat析构函数调用" << endl;
//			delete m_name;//若不释放干净会导致内存泄露
//			m_name = NULL;
//		}
//	}
//	string *m_name;
//};
//void test01()
//{
//	animal* an = new cat("tom");
//	an->speak();
//	//(非虚析构时）父类指针在析构时，不会调用子类析构函数，若子类有堆区数据，会内存泄露
//	delete an;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//多态案列--电脑组装

//抽象不同零件类
//class cpu
//{
//public:
//	virtual void calculator() = 0;
//};
//class vediocard
//{
//public:
//	virtual void display() = 0;
//};
//class memory
//{
//public:
//	virtual void storage() = 0;
//};
//
////电脑类
//class computer
//{
//public:
//	computer(cpu* cp, vediocard* vc, memory* mem)
//	{
//		m_cp = cp;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	//工作函数
//	void work()
//	{
//		//调用接口
//		m_cp->calculator();
//		m_vc->display();
//		m_mem->storage();
//	}
//
//	//提供析构函数 释放3个电脑零件
//	~computer()
//	{
//		if (m_cp != NULL)
//		{
//			delete m_cp;
//			m_cp = NULL;
//		}
//
//		if (m_vc != NULL)
//		{
//			delete m_vc;
//			m_vc = NULL;
//		}
//
//		if (m_mem != NULL)
//		{
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//private:
//	cpu* m_cp;
//	vediocard* m_vc;
//	memory* m_mem;
//};
//
////具体厂商
//
//class intelcpu :public cpu
//{
//public:
//	virtual void calculator()
//	{
//		cout << "intel的cpu开始工作" << endl;
//	}
//
//};
//class intelvediocard :public vediocard
//{
//public:
//	virtual void display()
//	{
//		cout << "intel的显卡开始工作" << endl;
//	}
//
//};
//class intelmemory :public memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "intel的内存条开始工作" << endl;
//	}
//
//};
//
//
//class lenovocpu :public cpu
//{
//public:
//	virtual void calculator()
//	{
//		cout << "lenovo的cpu开始工作" << endl;
//	}
//
//};
//class lenovovediocard :public vediocard
//{
//public:
//	virtual void display()
//	{
//		cout << "lenovo的显卡开始工作" << endl;
//	}
//
//};
//class lenovomemory :public memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "lenovo的内存条开始工作" << endl;
//	}
//
//};
//
//void test01()
//{
//	//第一台电脑零件
//	cpu* intelcpu_1 = new intelcpu;
//	vediocard* intelvediocard_1 = new intelvediocard;
//	memory* intelmemory_1 = new intelmemory;
//	//创建第一台电脑
//	cout << "第一台电脑开始工作" << endl;
//	computer* comp1 = new computer(intelcpu_1, intelvediocard_1, intelmemory_1);
//	comp1->work();
//	delete comp1;
//
//	
//	cout << "----------------------------" << endl;
//
//	//第二台电脑
//	cout << "第二台电脑开始工作" << endl;
//	computer* comp2 = new computer(new lenovocpu, new lenovovediocard, new lenovomemory);
//	comp2->work();
//	delete comp2;
//
//	
//	cout << "----------------------------" << endl;
//
//	//第三台电脑
//	cout << "第三台电脑开始工作" << endl;
//	computer* comp3 = new computer(new lenovocpu, new intelvediocard, new lenovomemory);
//	comp3->work();
//	delete comp3;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//文件操作--文件可以将数据持久化
//文本文件（ascii)、二进制文件(0101)
//ofstream-写操作、ifstream-读操作、fstream-读写操作

//写文件（文本文件）
//void test01()
//{
//	//1.包含头文件
//	//2.创建流对象
//	ofstream ofs;//output file stream
//
//	//3.指定打开方式
//	ofs.open("test.txt", ios::out);
//
//	//4.写内容
//	ofs << "姓名：张三" << endl;
//	ofs << "性别：男" << endl;
//	ofs << "年龄：20" << endl;
//
//	//5.关闭文件
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//读文件（文本文件）
//void test01()
//{
//	//1.包含头文件
//	//2.创建流对象
//	ifstream ifs;//input file stream
//
//	//3.打开文件并判断是否成功
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return;
//	}
//
//	//4.读数据
//	
//	//第一种
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//	//第二种
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//第三种
//	/*string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}*/
//
//	//第四种--不建议这种，一个一个字符读太慢
//	char c;
//	while ((c = ifs.get()) != EOF)//EOF end of file
//	{
//		cout << c;
//	}
//
//	//5.关闭文件
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//二进制写文件

//class Person
//{
//public:
//	char m_name[64];
//	int m_age;
//};
//void test01()
//{
//	//1.包含头文件
//	//2.创建流对象
//	ofstream ofs("person.txt", ios::out | ios::binary);//也可以写在这里
//
//	//3.打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	//4.写文件
//	Person p = { "zhangsan",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//5.关闭
//	ofs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//二进制读文件

class Person
{
public:
	char m_name[64];
	int m_age;
};
void test01()
{
	//1.包含头文件
	//2.创建流对象
	ifstream ifs;

	//3.打开文件并判断是否成功
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}

	//4.读文件
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << p.m_name << endl;
	cout << p.m_age << endl;

	//5.关闭
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}