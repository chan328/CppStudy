#include "stdafx.h"
#include <iostream>
#include <cstring>

union DataValue01
{
	int v_int;
	float v_float;
	char v_string[4];
};

struct Datavalue02
{
	int v_int;
	float v_float;
	char v_string[4];
};

int main()
{
	std::cout << "����ü�� ũ�� = " << sizeof(DataValue01) << std::endl;
	std::cout << "����ü�� ũ�� = " << sizeof(Datavalue02) << std::endl;
}