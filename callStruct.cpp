#include "stdafx.h"
#include <iostream>

struct Something
{
	static int s_value; // ���� ��� ������ ������.
	static int getSValue() { return s_value; } // ���� ��� �Լ��� �����Ѵ�.

	int value; // �Ϲ� ��� ������ ������.
	int getValue() { return value; } // �Ϲ� ��� �Լ��� �����Ѵ�.
};

// �Ʒ��� ���� �ɹ� ������ �ʱ�ȭ��ų �� ����ó�� ���� Ȯ�� �����ڸ� ����Ѵ�.
int Something::s_value = 1;

int main()
{
	std::cout << Something::getSValue() << std::endl;

	// ���� ��� ������ �ƴ� ����ü�� �Ϲ� ��� ������ ����ü�� Ÿ���� ���� ����� �Բ�
	// value ��� ������ ������ ���� �ʱ�ȭ ��ų �� �ִ�.
	Something s = { 100 };

	// ���� ��� �Լ��� �Ϲ� ��� �Լ��� �����ϰ� �Լ��� ȣ���� ������ ����.
	std::cout << s.getSValue() << " , " << s.getSValue() << std::endl;
}