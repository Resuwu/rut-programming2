#include <iostream>
#include <exception>
#include "Cursor.h"

Orientation inView(std::string input);

/**
 * \brief Функция входа в программу.
 * \return 0 в случае успеха.
 */
int main()
{
	unsigned int x;
	unsigned int y;
	unsigned char size;
	Orientation view;

	std::cout << "Input initial cursor values:\n";
	std::cin >> x >> y >> size >> view;

	Cursor airplane(x, y, size, view, true);

	std::cout << "Methods tests:\n";
	try
	{
		std::cout << "Test of getX() method: " << airplane.getX() << std::endl;
		std::cout << "Test of setX() method, input x: ";
		std::cin >> x;
		airplane.setX(x);
		std::cout << "getX(): " << airplane.getX() << std::endl;

		std::cout << "Test of getY() method: " << airplane.getY() << std::endl;
		std::cout << "Test of setY() method, input y: ";
		std::cin >> y;
		airplane.setY(y);
		std::cout << "getY(): " << airplane.getY() << std::endl;

		std::cout << "Test of getSize() method: " << airplane.getSize() << std::endl;
		std::cout << "Test of setSize() method, input size: ";
		std::cin >> size;
		airplane.setSize(size);
		std::cout << "getSize(): " << airplane.getSize() << std::endl;

		std::cout << "Test of getView() method: " << airplane.getView() << std::endl;
		std::cout << "Test of setY() method, input y: ";
		std::cin >> y;
		airplane.setY(y);
		std::cout << "getY(): " << airplane.getY() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	system("pause");
	return 0;
}

Orientation inView(std::string input)
{
	Orientation view = Orientation::Horisontal;
	if (input == "Horisontal")
		view = Orientation::Horisontal;
	else if (input == "Vertical")
		view = Orientation::Vertical;
	return view;
}