#include <iostream>
#include "Classes.h"

int main()
{
	try
	{
		functions test_func_1(0);
		derivative test_der_1;
		std::cout << test_func_1 << std::endl
			<< test_der_1 << std::endl;
	}
	catch (std::invalid_argument& e)
	{
		std::cout << e.what();
	}
	system("pause");
	return 0;
}