#include "Cursor.h"
#include "Helper.cpp"

Cursor::Cursor(unsigned int x, unsigned int y, unsigned char size, Orientation view, bool isVisible)
	: x(x), y(y), size(size), view(view), isVisible(isVisible)
{
}

unsigned int Cursor::getX() const
{
	return this->x;
}

unsigned int Cursor::getY() const
{
	return this->y;
}

unsigned char Cursor::getSize() const
{
	return this->size;
}

Orientation Cursor::getView() const
{
	return this->view;
}

void Cursor::setX(unsigned int new_x)
{
	if (inRange(0, 1920, new_x))
		x = new_x;
}

void Cursor::setY(unsigned int new_y)
{
	if (inRange(0, 1080, new_y))
		y = new_y;
}

void Cursor::setSize(unsigned char new_size)
{
		size = new_size;
}

void Cursor::setView(Orientation new_view)
{
	view = new_view;
}

void Cursor::hide()
{
	isVisible = false;
}

void Cursor::show()
{
	isVisible = true;
}