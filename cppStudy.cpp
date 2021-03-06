// CppStudy.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <locale>
#include <iomanip>

// 아래 함수는 일자를 'xx xx xxxx'처럼 콘솔 화면에 출력하는 기능을 제공함.
void showDate(int m, int d, int y)
{
	// 아래 문장은 출력할 때 문자폭을 다 채울 수 없다면 나머지 공간을 '0'으로 채우라는 의미로 사용함.
	std::cout << std::setfill('0');

	std::cout << std::setw(2) << m << '/' // std::setw(2)는 출력 데이터의 폭을 두 문자로 하라는 의미.
		<< std::setw(2) << d << '/'
		<< std::setw(4) << y << std::endl;
	std::cout << std::endl;
}


int main()
{
	double x = 800000.0 / 81.0;

	// std::fixed는 실수를 출력할 때 고정 소수점 자리를 사용함.
	std::cout << std::fixed << std::setprecision(2) << x << std::endl;
	x = 2.0 / 3.0;

	// std::setprecision(4)는 소숫점이하 자리를 4로 한다는 의미로 사용한다.
	std::cout << std::fixed << std::setprecision(4) << x << std::endl;
	std::cout << std::endl;

	// 위의 일자 함수를 호출한다.
	showDate(1, 1, 2019);

	unsigned long x0 = 64206;

	std::cout << x0 << std::showbase
		<< "8진법은\"" << std::oct << x0 << "\""
		<< "16진법은\"" << std::hex << x0 << "\"" << std::endl;
	std::cout << std::endl;
	return 0;
}
