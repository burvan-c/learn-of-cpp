//#define _CRT_SECURE_NO_WARNINGS 1
//#pragma once


#include<iostream>
using namespace std;
#include<string>


//����ģ�͡�thisָ��
//c++�����г�Ա�������Ա�����ֿ�����
//ֻ�зǾ�̬��Ա����������Ķ���������������

//class Person
//{
//	int m_a;//�Ǿ�̬��Ա���������������
//
//	static int m_b;//��̬��Ա�����������������
//
//	void func(){}//��Ա�������Ա�����ֿ�����;�Ǿ�̬��Ա�����������������
//};
//
//void test01()
//{
//	Person p;
//	//�ն���ռ1�ֽڣ�Ϊ�����ֿն���ռ�ڴ��λ��
//	cout << sizeof(p) << endl;
//}
//
//void test02()
//{
//	Person p;
//	cout << sizeof(p) << endl;
//
//}
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//thisָ��--ָ�򱻵��õĳ�Ա���������Ķ����ĸ�������ó�Ա����thisָ���ĸ�����
//thisָ��������ÿ���Ǿ�̬��Ա�����ڵ�ָ�룻���趨�壬ֱ��ʹ��
//��;��1.�βκͳ�Ա����ͬ��ʱ����thisָ������ 2.��ķǾ�̬��Ա�������ض���������return*this

//class Person
//{
//public:
//	Person(int age)
//	{
//		this->age = age;//thisָ����ó�Ա�����Ķ���
//	}
//
//	Person& Personaddage(Person&p)
//	{
//		this->age += p.age;
//
//		//this��ָ��p2��ָ�룬*this��ָ��p2�ı���
//		return*this;
//	}
//
//	int age;
//};
////1.������Ƴ�ͻ
//void test01()
//{
//	Person p1(18);
//	cout << "p1���䣺" << p1.age << endl;
//}
//
////2.���ض�������*this
//void test02()
//{
//	Person p1(10);
//
//	Person p2(10);
//
//	//��ʽ���˼��
//	p2.Personaddage(p1).Personaddage(p1).Personaddage(p1);
//
//	cout << "p2���䣺" << p2.age << endl;
//}
//
//int main()
//{
//	//test01();
//	test02();
//	system("pause");
//	return 0;
//}



//��ָ����ʳ�Ա����
//c++��ָ����Ե��ó�Ա������Ҫע���Ƿ��õ�thisָ��

//class Person
//{
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//
//	void showPersonAge()
//	{
//		/*if (NULL == this)
//		{
//			return;
//		}*/
//		cout << m_age << endl;//��ָ���޷��������е�����
//		//����m_age�൱��this->age
//	}
//
//	int m_age;
//};
//
//void test01()
//{
//	Person* p = NULL;
//
//	p->showClassName();
//
//	//p->m_age = 10;//��ָ���޷��������е�����
//	p->showPersonAge();
//
//}
//
//int main()
//{
//	test01();
//	system("pause");
//	return 0;
//}



//const���γ�Ա����
//��������������

////������
//class Person
//{
//public:
//	//thisָ�뱾�� ��ָ�볣��  ָ���ָ���ǲ������޸ĵ�
//	void showPerson() const//����const����this,��thisָ���ֵ�����޸�
//	{
//		//this->m_a = 100;
//		this->m_b = 100;
//	}
//
//	void func()
//	{
//
//	}
//
//	int m_a;
//	mutable int m_b;//���Ϲؼ���mutable���ڳ������оͿ����޸���
//};
//
////������
//void test01()
//{
//	const Person p;//�ڶ���ǰ��const,��Ϊ������
//	//p.m_a = 100;//���ﱨ�����޸�
//	p.m_b = 100;//���Ϲؼ���mutable���ڳ������оͿ����޸���
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.func();//���ɵ���
//}





//��Ԫ--ȫ�ֺ�������Ԫ��������Ԫ����Ա��������Ԫ

//ȫ�ֺ�������Ԫ
class Building
{
	//ȫ�ֺ���Ϊ��Ԫ�����Է���˽�г�Ա
	friend void goodGay(Building* building);
public:
	Building()
	{
		m_sittingRoom = "����";
		m_bedRoom = "����";
	}

public:
	string m_sittingRoom;

private:
	string m_bedRoom;
};

//ȫ�ֺ���
void goodGay(Building*building)
{
	cout << building->m_sittingRoom << endl;

	cout << building->m_bedRoom << endl;

}

void test01()
{
	Building building;
	goodGay(&building);
}

int main()
{
	test01();
	system("pause");
	return 0;
}