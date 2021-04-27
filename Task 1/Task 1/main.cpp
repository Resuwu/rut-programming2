#include <iostream>
#include "Cursor.h"

std::string View_output(Orientation value);

/**
 * \brief Функция входа в программу.
 * \return 0 в случае успеха.
 */
int main()
{
	Cursor test_cursor(500, 400, 10, Orientation::Vertical, true, 1920, 1080, 15, 1);
	std::cout << "--------------------GETTERS--------------------" << std::endl;
	std::cout << test_cursor.Get_X() << std::endl;
	std::cout << test_cursor.Get_Y() << std::endl;
	std::cout << static_cast<int>(test_cursor.Get_Size()) << std::endl;
	std::cout << View_output(test_cursor.Get_View()) << std::endl;
	std::cout << test_cursor.Get_Is_Visible() << std::endl;
	Cursor test_copy(test_cursor);
	std::cout << "--------------------TESTCOPY--------------------" << std::endl;
	std::cout << test_copy.Get_X() << std::endl;
	std::cout << test_copy.Get_Y() << std::endl;
	std::cout << static_cast<int>(test_copy.Get_Size()) << std::endl;
	std::cout << View_output(test_copy.Get_View()) << std::endl;
	std::cout << test_copy.Get_Is_Visible() << std::endl;
	std::cout << "--------------------SETTERS--------------------" << std::endl;
	test_cursor.Set_X(400);
	test_cursor.Set_Y(300);
	test_cursor.Set_Size(5);
	test_cursor.Set_View(Orientation::Horisontal);
	test_cursor.Hide();
	std::cout << test_cursor.Get_X() << std::endl;
	std::cout << test_cursor.Get_Y() << std::endl;
	std::cout << static_cast<int>(test_cursor.Get_Size()) << std::endl;
	std::cout << View_output(test_cursor.Get_View()) << std::endl;
	std::cout << test_cursor.Get_Is_Visible() << std::endl;
	std::cout << "--------------------TESTSHOW--------------------" << std::endl;
	test_cursor.Show();
	std::cout << test_cursor.Get_Is_Visible() << std::endl;
	system("pause");
	return 0;
}

std::string View_output(Orientation value)
{
	std::string output;
	if (value == Orientation::Horisontal)
		output = "Horisontal";
	if (value == Orientation::Vertical)
		output = "Vertical";
	return output;
}