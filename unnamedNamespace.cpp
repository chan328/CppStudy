#include "stdafx.h"
#include <iostream>

namespace
{
	void SampleMethod()
	{
		std::cout << "���� ���ӽ����̽� �� SampleMethod �Լ��Դϴ�." << std::endl;
	}
}

namespace Sample
{
	void SampleMethod()
	{
		SampleMethod(); // ���� ���ӽ����̽� �� SampleMethod �Լ��� ȣ���Ѵ�.
		std::cout << "> sample ���ӽ����̽� �� SampleMethod �Լ��Դϴ�." << std::endl;
	}

	namespace nested
	{
		void SampleMethod()
		{
			std::cout << ">> nested ���ӽ����̽� �� SampleMthod �Լ��Դϴ�." << std::endl;
		}
	}
}

int main()
{
	Sample::SampleMethod();
	Sample::nested::SampleMethod();
	SampleMethod();
	::SampleMethod();
	return 0;
}