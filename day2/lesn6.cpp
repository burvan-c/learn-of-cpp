//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once

#include<iostream>
using namespace std;


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
class calculater
{
public:
	int getresult(string oper)
	{
		if ("+" == oper)
		{
			return m_num1 + m_num2;
		}
		else if ("-" == oper)
		{
			return m_num1 - m_num2;
		}
		else if ("*" == oper)
		{
			return m_num1 * m_num2;
		}
	}

	int m_num1;
	int m_num2;
};
void test01()
{

}