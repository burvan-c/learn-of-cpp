#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<iostream>
using namespace std;
#include<string>
#define MAX 1000


//ͨѶ¼����ϵͳ


//��ϵ�˽ṹ��
struct Person
{
	string m_name;
	int m_sex;//1��2Ů
	int m_age;
	string m_phone;
	string m_addr;
};
//ͨѶ¼�ṹ��
struct Addressbooks
{
	//������ϵ������
	struct Person pArray[MAX];
	//ͨѶ¼��ǰ��¼��������
	int m_size;
};
void addPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else
	{
		//��Ӿ�����ϵ��
		//�������Ա����䡢�绰��סַ
		string name;
		cout << "������������" << endl;
		cin >> name;
		abs->pArray[abs->m_size].m_name = name;

		cout << "�������Ա�" << endl;
		cout << "1--��" << endl;
		cout << "2--Ů" << endl;
		int sex = 0;
		while (true)
		{
			cin >> sex;
			//������ȷ�˳�ѭ�������������������
			if (1 == sex || 2 == sex)
			{
				abs->pArray[abs->m_size].m_sex = sex;
				break;
			}
			else
			{
				cout << "���������������" << endl;
			}
		}
		
		cout << "����������" << endl;
		int age = 0;
		cin >> age;
		abs->pArray[abs->m_size].m_age = age;

		cout << "��������ϵ�绰��" << endl;
		string phone;
		cin >> phone;
		abs->pArray[abs->m_size].m_phone = phone;

		cout << "�������ַ��" << endl;
		string address;
		cin >> address;
		abs->pArray[abs->m_size].m_addr = address;

		//����ͨѶ¼����
		abs->m_size++;

		cout << "��ӳɹ�" << endl;

		system("pause");//�밴���������
		system("cls");//��������
	}
}

void showPerson(Addressbooks* abs)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ0
	if (abs->m_size == 0)
	{
		cout << "��ǰ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "������" << abs->pArray[i].m_name << "\t";
			cout << "�Ա�" << (abs->pArray[i].m_sex==1?"��":"Ů") << "\t";//��Ŀ�����--�
			cout << "���䣺" << abs->pArray[i].m_age << "\t";
			cout << "�绰��" << abs->pArray[i].m_phone << "\t";
			cout << "סַ��" << abs->pArray[i].m_addr << endl;
		}
	}
	system("pause");//�밴���������
	system("cls");//��������
}
//�����ϵ���Ƿ���ڣ������ڷ���λ��ɾ����ϵ�ˣ��������ڷ���-1
//����1--ͨѶ¼    ����2--�Ա�����
int isExist(Addressbooks* abs,string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->pArray[i].m_name == name)
		{
			return i;//�ҵ���
		}
	}
	return -1;//δ�ҵ�
}
//ɾ��ָ����ϵ��
void deletePerson(Addressbooks* abs)
{
	cout << "������Ҫɾ������ϵ��" << endl;

	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (-1 != ret)
	{
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->pArray[i] = abs->pArray[i + 1];//���÷ֿ�д
		}
		abs->m_size--;//����ͨѶ¼�е���Ա��
		cout << "ɾ���ɹ�" << endl;
	}
	else
	{
		cout << "���޴���" << endl;
	}

	system("pause");//�밴���������
	system("cls");//��������
}
//�˵�
void showMenu()
{
	cout << "***** 1.�����ϵ�� *****" << endl;
	cout << "***** 2.��ʾ��ϵ�� *****" << endl;
	cout << "***** 3.ɾ����ϵ�� *****" << endl;
	cout << "***** 4.������ϵ�� *****" << endl;
	cout << "***** 5.�޸���ϵ�� *****" << endl;
	cout << "***** 6.�����ϵ�� *****" << endl;
	cout << "***** 0.�˳�ͨѶ¼ *****" << endl;
}

int main()
{
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼
	abs.m_size = 0;

	int select = 0;//�����û��������

	while (true)
	{
		showMenu();
		cin >> select;
		switch (select)
		{
		case 1://1.�����ϵ��
			addPerson(&abs);//��ַ���ݲſ��Ըı�ʵ��
			break;
		case 2://2.��ʾ��ϵ��
			showPerson(&abs);
			break;
		case 3://3.ɾ����ϵ��
		/*{
			cout << "������Ҫɾ����ϵ�˵�������" << endl;
			string name;
			cin >> name;

			if (isExist(&abs, name) == -1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "�ҵ�����" << endl;
			}
		}*/
			deletePerson(&abs);
			break;//case����У�breakǰ�Ĵ������ʱҪ�Ӵ����ţ����򱨴�
		case 4://4.������ϵ��
			break;
		case 5://5.�޸���ϵ��
			break;
		case 6://6.�����ϵ��
			break;
		case 0://0.�˳�ͨѶ¼
			cout << "�˳�" << endl;
			system("pause");
			return 0;//����0���ظ�while
			break;
		default:
			break;
		}
	}
	
	system("pause");
	return 0;
}