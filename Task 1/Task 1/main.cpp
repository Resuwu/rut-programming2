#include <iostream>
#include "Cursor.h"

/**
 * \brief Функция входа в программу.
 * \return 0 в случае успеха.
 */
int main()
{
	Cursor test_cursor(500, 400, 10, Orientation::Vertical, true, 1920, 1080, 15, 1);
	std::cout << "--------------------GETTERS--------------------" << std::endl;
	std::cout << test_cursor << std::endl;
	Cursor test_copy(test_cursor);
	std::cout << "--------------------TESTCOPY--------------------" << std::endl;
	std::cout << test_copy << std::endl;
	std::cout << "--------------------SETTERS--------------------" << std::endl;
	test_cursor.set_x(400);
	test_cursor.set_y(300);
	test_cursor.set_size(5);
	test_cursor.set_view(Orientation::Horisontal);
	test_cursor.hide();
	std::cout << test_cursor << std::endl;
	std::cout << "--------------------TESTSHOW--------------------" << std::endl;
	test_cursor.show();
	std::cout << test_cursor.get_visibility() << std::endl;
	system("pause");
	return 0;
}