#include "stdafx.h"
#include<iostream>

void Print_int(int x)
{
	printf("%d�� �μ��� %s �Դϴ�.\n", x, (x)? "��":"����");
}

//bool Ÿ���� �μ��� ����Ѵ�.
void Print_bool(bool x)
{
	std::cout << x << "�μ���" << (x ? "��" : "����") << "�Դϴ�." << std::endl;

	//std::boolalpha�� ȭ�� ��� �� 1�� 0�� �ƴ� true �� false�� ���ڷ� ����� �ִ�
	//����� �Ѵ�.
	std::cout << "bool Ÿ���� �����ʹ� " << std::boolalpha << x << "��" << !x
		<< "�� ǥ���� �� �ֽ��ϴ�." << std::endl;
}

int main()
{
	bool ok = true;
	bool notok = false;

	Print_int(100);
	Print_bool(ok);

	// ȭ�鿡 true�� false�� �����Ϸ��� ������ ���� std::noboolalpha�� ����Ѵ�.
	std::cout << notok << ' ' << std::noboolalpha << notok << std::endl;

	// ����� ������� �ʴ´ٸ� ������ ���� �Լ��� ����� �� �ִ�.
	std::boolalpha(std::cout);
	std::cout << notok << std::endl;

	// ���� �Է� ��Ʈ���� ���� �Էµ� ���ڿ�(true �Ǵ� false)�� ������ bool 
	// Ÿ���� �����ͷ� �Է¹ް� �� �Ѵٸ� ������ ���� �۾��� �ϸ� �ȴ�.
	bool istrue;
	std::cin >> std::boolalpha >> istrue;
	std::cout << istrue << " = " << (istrue == true) << std::endl;
}