//#define _CRT_SECURE_NO_WARNINGS 1




//�����ʼ��������--���캯������ʼ��������������������

//���캯��������(){}
//          û�з���ֵ,��дvoid
//          ��������������ͬ
//          �����в��������Է�������
//          ��������ʱ���Զ����ã���һ��

//����������~��������{}
//          û�з���ֵ,��дvoid
//          ��������������ͬ
//          �������в����������Է�������
//          ���ٶ���ʱ���Զ����ã���һ��


//#include<iostream>
//using namespace std;

//���캯��

//class Person
//{
//public:
//	//���캯��
//	Person()//û�з���ֵ��void,��������ͬ
//	{
//		cout << "Person���캯���ĵ���" << endl;
//	}
//
//	//��������
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//};
//
//void test01()
//{
//	Person p;//�����ﹹ�캯�������������ᱻ�Զ�����һ�Σ�������p����ӣ���
//	//��ջ�����ݣ�test01��ִ����Ϻ��ͷ��������
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//���캯�����������
//    �вι��졢�޲ι��죨�޲ι����ֳ�ΪĬ�Ϲ��죩
//    ��ͨ���졢��������
//    ���÷�ʽ�����ŷ�����ʾ������ʽת����

//class Person
//{
//public:
//	//���캯��
//	Person()//û�з���ֵ��void,��������ͬ
//	{
//		cout << "Person�޲ι��캯���ĵ���" << endl;
//	}
//	Person(int a)//û�з���ֵ��void,��������ͬ
//	{
//		age = a;
//		cout << "Person�вι��캯���ĵ���" << endl;
//	}
//	//�������캯��
//	Person(const Person &p)//�ѣ����������Կ�����������Ĺ��캯����
//	{
//		age = p.age;
//		cout << "Person�������캯���ĵ���" << endl;
//	}
//	int age;
//
//
//
//	//��������
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//};
//
////����
//void test01()
//{
//	//1.���ŷ�
//	Person p1;//Ĭ�Ϲ��캯���ĵ���(�޲Σ�
//	Person p2(10);//�вι��캯������
//	Person p3(p2);//�������캯���ĵ���
//	//ע������
//	//����Ĭ�Ϲ���ʱ�����ӣ���
//	cout << "p2������Ϊ��" << p2.age << endl;
//	cout << "p3������Ϊ��" << p2.age << endl;
//
//
//	//2.��ʾ��
//	Person p1;
//	Person p2 = Person(10);//�вι��캯�����ã��Ⱥ����Ϊ�����Ⱥ��Ҳ�Ϊ��������
//	Person p3 = Person(p2);//�������캯�����ã����н����������������̱����յ���
//	//ע������
//	//�����ÿ������캯����ʼ����������
//
//
//	//3.��ʽת����
//	Person p4 = 10;//�൱��Person p4=Person (10);
//	Person p5 = p4;//�����������
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}




//�������캯������ʱ��
//1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//2.ֵ���ݵķ�ʽ����������
//3.ֵ��ʽ���ؾֲ�����

//class Person
//{
//public:
//	Person()
//	{
//		cout << "PersonĬ�Ϲ��캯������" << endl;
//	}
//	Person(int age)
//	{
//		m_age = age;
//		cout << "Person�вι��캯������" << endl;
//	}
//	Person(const Person& p)
//	{
//		m_age = p.m_age;
//		cout << "Person�������캯������" << endl;
//	}
//
//	~Person()
//	{
//		cout << "Person������������" << endl;
//	}
//
//	int m_age;
//};
//
////1.ʹ��һ���Ѿ�������ϵĶ�������ʼ��һ���¶���
//void test01()
//{
//	Person p1(20);
//	Person p2(p1);
//	cout << "p2�����䣺" << p2.m_age << endl;
//}
//
////2.ֵ���ݵķ�ʽ����������
//void dowork(Person p)//ʵ�δ����β�ʱ����ÿ������캯��
//{
//
//}
//void test02()
//{
//	Person p;//����Ĭ�Ϲ��캯��
//	dowork(p);
//}
//
////3.ֵ��ʽ���ؾֲ�����
//Person dowork2()
//{
//	Person p1;//���������Ĭ�Ϲ��캯��
//	return p1;//��ֵ�ķ�ʽ���أ�����p1�����µĶ��󷵻ظ�test03()
//}
//void test03()
//{
//	Person p = dowork2();
//}
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	system("pause");
//	return 0;
//}


//���캯�����ù���
// �û������вι��캯����C++�ṲĬ�Ͽ������캯��
// �û����忽�����캯����c++���ṩ��������
// 
//Ĭ������£�c++���������ٸ�һ�������3������
//Ĭ�Ϲ��캯�����޲Σ�������Ϊ�գ�
//Ĭ�������������޲Σ�������Ϊ�գ�
//Ĭ�Ͽ������캯���������Խ���ֵ����

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age)
//	{
//		cout << "Person���вι��캯������" << endl;
//		m_age = age;
//	}
//	/*Person(const Person& p)
//	{
//		cout << "Person�Ŀ������캯������" << endl;
//		m_age = p.m_age;
//	}*/
//	~Person()
//	{
//		cout << "Person��������������" << endl;
//	}
//	int m_age;
//};
//void test01()
//{
//	Person p;
//	p.m_age = 18;
//
//	Person p2(p);
//
//	cout << "p2�����䣺" << p2.m_age << endl;
//}
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}





//�����ǳ����
//���--�ڶ�������ռ䣬���п�������
//ǳ����--�򵥸�ֵ��������

//ǳ�����ᵼ�¶����ڴ��ظ��ͷ�--�������������һ��ռ���Խ���������

//class Person
//{
//public:
//	Person()
//	{
//		cout << "Person��Ĭ�Ϲ��캯������" << endl;
//	}
//	Person(int age,int height)
//	{
//		cout << "Person���вι��캯������" << endl;
//		m_age = age;
//		m_height = new int(height);
//	}
//	Person(const Person& p)
//	{
//		cout << "Person�Ŀ������캯������" << endl;
//		m_age = p.m_age;
//		//m_height = p.m_height;//������Ĭ��ʵ��
//		
//		//���
//		m_height = new int(*p.m_height);
//	}
//	~Person()
//	{
//		//�����������룬���������������ͷŵ�
//		if (m_height != NULL)
//		{
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "Person��������������" << endl;
//	}
//	int m_age;
//	int* m_height;
//};
//
//void test01()
//{
//	Person p1(18,180);
//	Person p2(p1);
//
//	cout << "p1�����䣺" << p1.m_age << "���Ϊ��" << *p1.m_height << endl;
//	cout << "p2�����䣺" << p2.m_age << "���Ϊ��" << *p2.m_height << endl;
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}