//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once

#include<iostream>
using namespace std;
#include<string>
#include<fstream>


//�̳�

//class java
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ����롢ע�ᡭ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ����" << endl;
//	}
//	void left()
//	{
//		cout << "c++��python��java����"<<endl;
//	}
//	void content()
//	{
//		cout << "java��Ƶ" << endl;
//	}
//};
//class python
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ����롢ע�ᡭ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ����" << endl;
//	}
//	void left()
//	{
//		cout << "c++��python��java����" << endl;
//	}
//	void content()
//	{
//		cout << "pytnon��Ƶ" << endl;
//	}
//};
//class cpp
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ����롢ע�ᡭ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ����" << endl;
//	}
//	void left()
//	{
//		cout << "c++��python��java����" << endl;
//	}
//	void content()
//	{
//		cout << "c++��Ƶ" << endl;
//	}
//};


//�̳�ʵ��ҳ��

//class basepage//����ҳ����
//{
//public:
//	void header()
//	{
//		cout << "��ҳ�������Ρ����롢ע�ᡭ��" << endl;
//	}
//	void footer()
//	{
//		cout << "�������ġ�����������վ�ڵ�ͼ����" << endl;
//	}
//	void left()
//	{
//		cout << "c++��python��java����" << endl;
//	}
//};
//
////�̳п��Լ����ظ�����
////�﷨��class ���� ���̳з�ʽ ����
////����Ҳ�������࣬����Ҳ�л���
//
//class java :public basepage
//{
//public:
//	void content()
//	{
//		cout << "java��Ƶ" << endl;
//	}
//};
//class python :public basepage
//{
//public:
//	void content()
//	{
//		cout << "python��Ƶ" << endl;
//	}
//};
//class cpp :public basepage
//{
//public:
//	void content()
//	{
//		cout << "cpp��Ƶ" << endl;
//	}
//};
//void test01()
//{
//	cout << "javaѧϰҳ��" << endl;
//	java ja;
//	ja.header();
//	ja.footer();
//	ja.left();
//	ja.content();
//
//	cout << "-----------------------" << endl;
//
//	cout << "pythonѧϰҳ��" << endl;
//	python py;
//	py.header();
//	py.footer();
//	py.left();
//	py.content();
//
//	cout << "-----------------------" << endl;
//
//	cout << "c++ѧϰҳ��" << endl;
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



////�̳з�ʽ--�����̳С������̳С�˽�м̳�
//
////�����̳�
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
//		m_a = 10;//�����еĹ���Ȩ�޳�Ա����������Ȼ�ǹ���Ȩ��
//		m_b = 10;//�����еı���Ȩ�޳�Ա����������Ȼ�Ǳ���Ȩ��
//		//m_c = 10;//�����е�˽��Ȩ�޳�Ա���������޷�����
//	}
//};
//void test01()
//{
//	son1 s1;
//	s1.m_a = 100;//����Ȩ�޿������������
//	//s1.m_b = 100;//����Ȩ�������ⲻ�ɷ���
//}
//
//
////�����̳�
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
//		m_a = 100;//�����й�����Ա���������Ϊ����Ȩ��
//		m_b = 100;//�����б�����Ա���������Ϊ����Ȩ��
//		//m_c = 100;//����˽�г�Ա�����޷�����
//	}
//};
//void test02()
//{
//	son2 s2;
//	//s2.m_a = 100;//��Ϊ����Ȩ�ޣ������޷�����
//	//s2.m_b = 100;//����Ȩ�ޣ��޷�����
//	//s2.m_c = 100;//˽��Ȩ�ޣ��޷�����
//}
//
//
////˽�м̳�
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
//		m_a = 100;//�����й�����Ա���������Ϊ˽��Ȩ��
//		m_b = 100;//�����б�����Ա���������Ϊ˽��Ȩ��
//		//m_c = 100;//����˽�г�Ա�������޷�����
//	}
//};
//void test03()
//{
//	son3 s3;
//	//s3.m_a = 190;//˽��Ȩ�ޣ������޷�����
//	//s3.m_b = 190;//˽��Ȩ�ޣ������޷�����
//	//s3.m_c = 190;//˽��Ȩ�ޣ������޷�����
//}
//class grandson3 :public son3
//{
//public:
//	void func()
//	{
//		//m_a = 100;//����˽��Ȩ�ޣ��������޷�����
//	}
//};




//�̳��еĶ���ģ��

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
//	//�����зǾ�̬��Ա���Զ��ᱻ����̳�
//	//˽�����Ա������޷�����
//	cout << sizeof(son) << endl;//16
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//�̳��й���������˳��

//class base
//{
//public:
//	base()
//	{
//		cout << "base���캯��" << endl;
//	}
//	~base()
//	{
//		cout << "base��������" << endl;
//	}
//};
//
//class son :public base
//{
//public:
//	son()
//	{
//		cout << "son���캯��" << endl;
//	}
//	~son()
//	{
//		cout << "son��������" << endl;
//	}
//};
//
//void test01()
//{
//	//base b;
//	//�ȹ��츸�࣬�������ࣻ���������෴
//	son s;
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//�̳�ͬ����Ա����ʽ--�����븸��ͬ��
//ֱ�ӷ�������ͬ����Ա�����ʸ������������

//class base
//{
//public:
//	base()
//	{
//		m_a = 20;
//	}
//	void func()
//	{
//		cout << "base->func����" << endl;
//	}
//	void func(int a)
//	{
//		cout << "son->func(int a)����" << endl;
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
//		cout << "son->func����" << endl;
//	}
//	
//};
//void test01()
//{
//	son s;
//	cout << s.m_a << endl;//����ֱ�ӷ���
//
//	cout << s.base::m_a << endl;//ͬ��ʱ����Ҫ����������
//}
//void test02()
//{
//	son s;
//	s.func();//����ֱ�ӷ���
//
//	s.base::func();//ͬ��ʱ����Ҫ����������
//
//	//s.func(100);//����������������и����ͬ������
//	s.base::func(100);
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//�̳� ͬ����̬��Ա����ʽ
//ֱ�ӷ�������ͬ����Ա�����ʸ������������

//class base
//{
//public:
//	static int m_a;//���������������ʼ��
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
////ͬ����̬��Ա����
//void test01()
//{
//	son s;
//	//ͨ���������
//	cout << s.m_a << endl;
//	cout << s.base::m_a << endl;
//
//	//ͨ����������
//	cout << son::m_a << endl;
//	cout << son::base::m_a << endl;
//}
//
////ͬ����̬��Ա����
//void test02()
//{
//	son s;
//	//ͨ���������
//	s.func();
//	s.base::func();
//
//	//ͨ����������
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



//��̳��﷨--����һ����̳ж����
//class ���ࣺ�̳з�ʽ ����1���̳з�ʽ ����2����
//������ͬ��ʱ���������

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


//���μ̳�--ͬһ������̳и����������࣬�ټ̳и���һ����

//class animal
//{
//public:
//	int m_a;
//};
////��̳н������
//class sheep :virtual public animal//��ʱanimalΪ�����
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
//	//���μ̳лᵼ����Դ�˷ѣ���������̳н��
//	cout << st.m_a << endl;
//	//��̳к��൱�ڹ���һ������
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}







//��̬
//��̬��̬���������ء���������أ�
//��̬��̬

//��̬��̬����������
//1.�м̳й�ϵ
//2.������д������麯������д����������ֵ���� ������ ���� ��ȫ��ͬ��

//��̬��̬ʹ��
//1.�����ָ������� ִ���������

//class animal
//{
//public:
//	/*void speak()    //��Ӧ  ��ַ���
//	{
//		cout << "����˵��" << endl;
//	}*/
//
//	//�麯��
//
//	virtual void speak()    //��Ӧ  ��ַ���
//	{
//		cout << "����˵��" << endl;
//	}
//	//�麯��ָ��->�麯����->��¼�麯����ַ
//};
//
//class cat :public animal
//{
//public:
//	 void speak()
//	{
//		cout << "����" << endl;
//	}
//};
//
////ִ�к���
//void dospeak(animal& animal)//animal&animal=cat c
//{    //�����ַ��󶨣��ڱ���׶���ȷ��������ַ����animal���е�speak����
//	animal.speak();
//}
//
//void test01()
//{
//	cat c;
//	dospeak(c);
//	//��Ҫִ��cat�е�speak�����������ַ��󶨣���animal��ִ��virtual void speak()
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//��̬����--��������
//��ͨд������̬д��

//��ͨд��
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


//���ö�̬ʵ�ּ�����--��֯�������ɶ���ǿ������ά��

//ʵ�ּ�����������
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
////�ӷ���������
//class addcalculator :public abstractcalculator
//{
//public:
//	int getresult()//virtual�ؼ��ֿ�д�ɲ�д
//	{
//		return m_num1+m_num2;
//	}
//};
//
////������������
//class subcalculator :public abstractcalculator
//{
//public:
//	int getresult()//virtual�ؼ��ֿ�д�ɲ�д
//	{
//		return m_num1 - m_num2;
//	}
//};
//
////�˷���������
//class mulcalculator :public abstractcalculator
//{
//public:
//	int getresult()//virtual�ؼ��ֿ�д�ɲ�д
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
//	//����--�ֶ�����new
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



//���麯����������
//���麯���﷨��viryual ����ֵ���� ������ ��������=0��
//�������˴��麯��������Ϊ������--�޷�ʵ�����������������д�������еĴ��麯��

//class base//������
//{
//public:
//	virtual void func() = 0;//���麯��
//};
//class son :public base
//{
//public:
//	virtual void func() 
//	{
//		cout << "func�����ĵ���" << endl;
//	};
//};
//void test01()
//{
//	//son s;//����Ҫ��д�麯���������޷�ʵ��������
//	base* ba = new son;
//	ba->func();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//��̬ʵ�ְ���

//class abstractdrinking
//{
//public:
//	//��ˮ
//	virtual void boil() = 0;
//
//	//����
//	virtual void brew() = 0;
//
//	//����
//	virtual void pourincup() = 0;
//
//	//�Ӹ���
//	virtual void putsomething() = 0;
//
//	//��������
//	void makedrink()
//	{
//		boil();
//		brew();
//		pourincup();
//		putsomething();
//	}
//};
////��������
//class coffee :public abstractdrinking
//{
//public:
//	//��ˮ
//	void boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//
//	//����
//	virtual void pourincup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//�Ӹ���
//	virtual void putsomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
////������
//class tea :public abstractdrinking
//{
//public:
//	//��ˮ
//	void boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//
//	//����
//	virtual void brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//
//	//����
//	virtual void pourincup()
//	{
//		cout << "���뱭��" << endl;
//	}
//
//	//�Ӹ���
//	virtual void putsomething()
//	{
//		cout << "�������" << endl;
//	}
//};
////��������
//void dowork(abstractdrinking* abs)//abstractdrinking* abs=new coffee
//{
//	abs->makedrink();
//	delete abs;
//}
//void test01()
//{
//	//��������
//	dowork(new coffee);
//	dowork(new tea);
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//�������봿������

//class animal
//{
//public:
//	animal()
//	{
//		cout << "animal���캯������" << endl;
//	}
//
//	//virtual ~animal()//�����Ϊ�������Ų��ᵼ���ڴ�й¶
//	//{
//	//	cout << "animal��������������" << endl;
//	//}
//	
//	//������������Ҳ���Խ���ڴ�й¶����
//	virtual ~animal() = 0;
//
//	//���麯��
//	virtual void speak() = 0;
//
//};
//animal::~animal()
//{
//	cout << "animal����������������" << endl;
//
//}
//class cat :public animal
//{
//public:
//	cat(string name)
//	{
//		cout << "cat���캯������" << endl;
//		m_name = new string(name);
//	}
//	virtual void speak()
//	{
//		cout << "����" << endl;
//	}
//	~cat()
//	{
//		if (m_name != NULL)
//		{
//			cout << "cat������������" << endl;
//			delete m_name;//�����ͷŸɾ��ᵼ���ڴ�й¶
//			m_name = NULL;
//		}
//	}
//	string *m_name;
//};
//void test01()
//{
//	animal* an = new cat("tom");
//	an->speak();
//	//(��������ʱ������ָ��������ʱ������������������������������ж������ݣ����ڴ�й¶
//	delete an;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//��̬����--������װ

//����ͬ�����
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
////������
//class computer
//{
//public:
//	computer(cpu* cp, vediocard* vc, memory* mem)
//	{
//		m_cp = cp;
//		m_vc = vc;
//		m_mem = mem;
//	}
//	//��������
//	void work()
//	{
//		//���ýӿ�
//		m_cp->calculator();
//		m_vc->display();
//		m_mem->storage();
//	}
//
//	//�ṩ�������� �ͷ�3���������
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
////���峧��
//
//class intelcpu :public cpu
//{
//public:
//	virtual void calculator()
//	{
//		cout << "intel��cpu��ʼ����" << endl;
//	}
//
//};
//class intelvediocard :public vediocard
//{
//public:
//	virtual void display()
//	{
//		cout << "intel���Կ���ʼ����" << endl;
//	}
//
//};
//class intelmemory :public memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "intel���ڴ�����ʼ����" << endl;
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
//		cout << "lenovo��cpu��ʼ����" << endl;
//	}
//
//};
//class lenovovediocard :public vediocard
//{
//public:
//	virtual void display()
//	{
//		cout << "lenovo���Կ���ʼ����" << endl;
//	}
//
//};
//class lenovomemory :public memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "lenovo���ڴ�����ʼ����" << endl;
//	}
//
//};
//
//void test01()
//{
//	//��һ̨�������
//	cpu* intelcpu_1 = new intelcpu;
//	vediocard* intelvediocard_1 = new intelvediocard;
//	memory* intelmemory_1 = new intelmemory;
//	//������һ̨����
//	cout << "��һ̨���Կ�ʼ����" << endl;
//	computer* comp1 = new computer(intelcpu_1, intelvediocard_1, intelmemory_1);
//	comp1->work();
//	delete comp1;
//
//	
//	cout << "----------------------------" << endl;
//
//	//�ڶ�̨����
//	cout << "�ڶ�̨���Կ�ʼ����" << endl;
//	computer* comp2 = new computer(new lenovocpu, new lenovovediocard, new lenovomemory);
//	comp2->work();
//	delete comp2;
//
//	
//	cout << "----------------------------" << endl;
//
//	//����̨����
//	cout << "����̨���Կ�ʼ����" << endl;
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




//�ļ�����--�ļ����Խ����ݳ־û�
//�ı��ļ���ascii)���������ļ�(0101)
//ofstream-д������ifstream-��������fstream-��д����

//д�ļ����ı��ļ���
//void test01()
//{
//	//1.����ͷ�ļ�
//	//2.����������
//	ofstream ofs;//output file stream
//
//	//3.ָ���򿪷�ʽ
//	ofs.open("test.txt", ios::out);
//
//	//4.д����
//	ofs << "����������" << endl;
//	ofs << "�Ա���" << endl;
//	ofs << "���䣺20" << endl;
//
//	//5.�ر��ļ�
//	ofs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//���ļ����ı��ļ���
//void test01()
//{
//	//1.����ͷ�ļ�
//	//2.����������
//	ifstream ifs;//input file stream
//
//	//3.���ļ����ж��Ƿ�ɹ�
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//
//	//4.������
//	
//	//��һ��
//	/*char buf[1024] = { 0 };
//	while (ifs >> buf)
//	{
//		cout << buf << endl;
//	}*/
//
//	//�ڶ���
//	/*char buf[1024] = { 0 };
//	while (ifs.getline(buf, sizeof(buf)))
//	{
//		cout << buf << endl;
//	}*/
//
//	//������
//	/*string buf;
//	while (getline(ifs, buf))
//	{
//		cout << buf << endl;
//	}*/
//
//	//������--���������֣�һ��һ���ַ���̫��
//	char c;
//	while ((c = ifs.get()) != EOF)//EOF end of file
//	{
//		cout << c;
//	}
//
//	//5.�ر��ļ�
//	ifs.close();
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//������д�ļ�

//class Person
//{
//public:
//	char m_name[64];
//	int m_age;
//};
//void test01()
//{
//	//1.����ͷ�ļ�
//	//2.����������
//	ofstream ofs("person.txt", ios::out | ios::binary);//Ҳ����д������
//
//	//3.���ļ�
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	//4.д�ļ�
//	Person p = { "zhangsan",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//5.�ر�
//	ofs.close();
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}


//�����ƶ��ļ�

class Person
{
public:
	char m_name[64];
	int m_age;
};
void test01()
{
	//1.����ͷ�ļ�
	//2.����������
	ifstream ifs;

	//3.���ļ����ж��Ƿ�ɹ�
	ifs.open("person.txt", ios::in | ios::binary);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}

	//4.���ļ�
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << p.m_name << endl;
	cout << p.m_age << endl;

	//5.�ر�
	ifs.close();
}
int main()
{
	test01();
	system("pause");
	return 0;
}