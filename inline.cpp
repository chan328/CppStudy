#include "stdafx.h"
#include <iostream>

#define USE_INLINE 1

namespace AppVersion
{
	namespace version1
	{
		void display()
		{
			std::cout << "display() �Լ� version 1" << std::endl;
		}
	}
	namespace version2
	{
		void display()
		{
			std::cout << "display() �Լ� version 2" << std::endl;
		}
	}
#if  USE_INLINE
	inline
#endif //  USE_INLINE
		namespace version3
	{
		void display()
		{
			std::cout << "display() �Լ� version 3" << std::endl;
		}
	}
	namespace version3
	{
		void whatsUp()
		{
			std::cout << "whatsUp() �Լ� version 3" << std::endl;
		}
	}
}

int main()
{
	AppVersion::display();
	AppVersion::whatsUp();
	return 0;
}