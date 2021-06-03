#include "functions.cpp"

int main()
{
	point p1, p2;
	std::cout << "Input point 1\nx, y: ";
	std::cin >> p1.x >> p1.y;
	std::cout << "Enter coord of point 2\nx, y: ";
	std::cin >> p2.x >> p2.y;


	std::cout << "===========================================Test 1\n";
	try
	{
		double length;
		length = length_1(p1, p2);
		std::cout << "length:  " << length << std::endl;
	}
	catch (char)
	{
		std::cout << "Error 1\n";
	}


	std::cout << "===========================================Test 2\n";
	try
	{
		double length;
		length = length_2(p1, p2);
		std::cout << "length:  " << length << std::endl;
	}
	catch (char)
	{
		std::cout << "Error 2\n";
	}


	std::cout << "===========================================Test 3\n";
	try
	{
		double length;
		length = length_3(p1, p2);
		std::cout << "length:  " << length << std::endl;
	}
	catch (std::invalid_argument& e)
	{
		std::cout << e.what();
	}


	std::cout << "===========================================Test 4_1\n";
	try
	{
		double length;
		length = length_4_1(p1, p2);
		std::cout << "length:  " << length << std::endl;
	}
	catch (my_exception& e)
	{
		std::cout << e.what();
	}


	std::cout << "===========================================Test 4_2\n";
	try
	{
		double length;
		length = length_4_2(p1, p2);
		std::cout << "length:  " << length << std::endl;
	}
	catch (null_exception& e)
	{
		std::cout << "Error 4_2\n";
	}


	std::cout << "===========================================Test 4_3\n";
	try
	{
		double length;
		length = length_4_3(p1, p2);
		std::cout << "length:  " << length << std::endl;
	}
	catch (invalid_value e)
	{
		std::cout << e.what();
	}
	system("pause");
	return 0;
}