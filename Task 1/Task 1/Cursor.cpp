#include "Cursor.h"
#include "Helper.cpp"

Cursor::Cursor(unsigned int x, unsigned int y, unsigned char size, Orientation view, bool isVisible)
	: X(x), Y(y), Size(size), View(view), IsVisible(isVisible)
{
}

Cursor::Cursor(const Cursor& other)
	: Cursor(other.GetX(), other.GetY(), other.GetSize(), other.GetView(), other.GetIsVisible())
{
}

unsigned int Cursor::GetX() const
{
	return this->X;
}

unsigned int Cursor::GetY() const
{
	return this->Y;
}

unsigned char Cursor::GetSize() const
{
	return this->Size;
}

Orientation Cursor::GetView() const
{
	return this->View;
}

bool Cursor::GetIsVisible() const
{
	return this->IsVisible;
}

void Cursor::SetX(unsigned int new_x)
{
	if (inRange(0, 1920, new_x))
		X = new_x;
}

void Cursor::SetY(unsigned int new_y)
{
	if (inRange(0, 1080, new_y))
		Y = new_y;
}

void Cursor::SetSize(unsigned char new_size)
{
		Size = new_size;
}

void Cursor::SetView(Orientation new_view)
{
	View = new_view;
}

void Cursor::Hide()
{
	IsVisible = false;
}

void Cursor::Show()
{
	IsVisible = true;
}