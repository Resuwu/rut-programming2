#include <iostream>
#include "Cursor.h"

std::string view_output(Orientation value);

/**
 * \brief Функция входа в программу.
 * \return 0 в случае успеха.
 */
int main()
{
	Cursor test_cursor(500, 400, 10, Orientation::Vertical, true, 1920, 1080, 15, 1);
	std::cout << "--------------------OVERLOAD--------------------" << std::endl;
	std::cout << test_cursor << std::endl;
	std::cout << "--------------------GETTERS--------------------" << std::endl;
	std::cout << test_cursor.get_x() << std::endl;
	std::cout << test_cursor.get_y() << std::endl;
	std::cout << static_cast<int>(test_cursor.get_size()) << std::endl;
	std::cout << view_output(test_cursor.get_view()) << std::endl;
	std::cout << test_cursor.get_visibility() << std::endl;
	Cursor test_copy(test_cursor);
	std::cout << "--------------------TESTCOPY--------------------" << std::endl;
	std::cout << test_copy.get_x() << std::endl;
	std::cout << test_copy.get_y() << std::endl;
	std::cout << static_cast<int>(test_copy.get_size()) << std::endl;
	std::cout << view_output(test_copy.get_view()) << std::endl;
	std::cout << test_copy.get_visibility() << std::endl;
	std::cout << "--------------------SETTERS--------------------" << std::endl;
	test_cursor.set_x(400);
	test_cursor.set_y(300);
	test_cursor.set_size(5);
	test_cursor.set_view(Orientation::Horisontal);
	test_cursor.hide();
	std::cout << test_cursor.get_x() << std::endl;
	std::cout << test_cursor.get_y() << std::endl;
	std::cout << static_cast<int>(test_cursor.get_size()) << std::endl;
	std::cout << view_output(test_cursor.get_view()) << std::endl;
	std::cout << test_cursor.get_visibility() << std::endl;
	std::cout << "--------------------TESTSHOW--------------------" << std::endl;
	test_cursor.show();
	std::cout << test_cursor.get_visibility() << std::endl;
	system("pause");
	return 0;
}

std::string view_output(Orientation value)
{
	std::string output;
	if (value == Orientation::Horisontal)
		output = "Horisontal";
	if (value == Orientation::Vertical)
		output = "Vertical";
	return output;
}