#include "Cursor.h"
#include "Helper.cpp"

Cursor::Cursor(unsigned int x, unsigned int y, unsigned char size, Orientation view, bool is_visible, unsigned int x_resolution, unsigned int y_resolution, unsigned char max_size, unsigned char min_size)
	: m_x(x), m_y(y), m_size(size), m_view(view), m_is_visible(is_visible), m_x_resolution(x_resolution), m_y_resolution(y_resolution), m_max_size(max_size), m_min_size(min_size)
{
}

Cursor::Cursor(const Cursor& other)
	: Cursor(other.Get_X(), other.Get_Y(), other.Get_Size(), other.Get_View(), other.Get_Is_Visible(), other.m_x_resolution, other.m_y_resolution, other.m_max_size, other.m_min_size)
{
}

unsigned int Cursor::Get_X() const
{
	return this->m_x;
}

unsigned int Cursor::Get_Y() const
{
	return this->m_y;
}

unsigned char Cursor::Get_Size() const
{
	return this->m_size;
}

Orientation Cursor::Get_View() const
{
	return this->m_view;
}

bool Cursor::Get_Is_Visible() const
{
	return this->m_is_visible;
}

void Cursor::Set_X(unsigned int x)
{
	if (In_range_for_int(this->m_x_resolution, x))
		m_x = x;
}

void Cursor::Set_Y(unsigned int y)
{
	if (In_range_for_int(this->m_y_resolution, y))
		m_y = y;
}

void Cursor::Set_Size(unsigned char size)
{
	if (In_range_for_char(this->m_min_size, this->m_max_size, size))
		m_size = size;
}

void Cursor::Set_View(Orientation view)
{
	m_view = view;
}

void Cursor::Hide()
{
	m_is_visible = false;
}

void Cursor::Show()
{
	m_is_visible = true;
}