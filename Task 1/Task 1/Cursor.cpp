#include "Cursor.h"
#include "Helper.cpp"

Cursor::Cursor(const unsigned int x, const unsigned int y, const unsigned char size, const Orientation& view,
	const bool is_visible, const unsigned int x_resolution, const unsigned int y_resolution, const unsigned char max_size, const unsigned char min_size)
	: m_x(x), m_y(y), m_size(size), m_view(view), m_is_visible(is_visible), m_x_resolution(x_resolution), m_y_resolution(y_resolution), m_max_size(max_size), m_min_size(min_size)
{
}

Cursor::Cursor(const Cursor& other)
	: Cursor(other.get_x(), other.get_y(), other.get_size(), other.get_view(), other.get_visibility(), other.m_x_resolution, other.m_y_resolution, other.m_max_size, other.m_min_size)
{
}

unsigned int Cursor::get_x() const
{
	return m_x;
}

unsigned int Cursor::get_y() const
{
	return m_y;
}

unsigned char Cursor::get_size() const
{
	return m_size;
}

Orientation Cursor::get_view() const
{
	return m_view;
}

bool Cursor::get_visibility() const
{
	return m_is_visible;
}

void Cursor::set_x(unsigned int x)
{
	if (in_range_for_int(this->m_x_resolution, x))
		m_x = x;
}

void Cursor::set_y(unsigned int y)
{
	if (in_range_for_int(this->m_y_resolution, y))
		m_y = y;
}

void Cursor::set_size(unsigned char size)
{
	if (in_range_for_char(this->m_min_size, this->m_max_size, size))
		m_size = size;
}

void Cursor::set_view(Orientation view)
{
	m_view = view;
}

void Cursor::hide()
{
	m_is_visible = false;
}

void Cursor::show()
{
	m_is_visible = true;
}

std::ostream& operator<<(std::ostream& os, const Orientation& obj)
{
	std::string text;
	if (obj == Orientation::Horisontal)
		text = "Horisontal";
	if (obj == Orientation::Vertical)
		text = "Vertical";
	return os << text;
}

std::ostream& operator<<(std::ostream& os, const Cursor& obj)
{
	return os << '|' << std::setw(4) << obj.get_x() << '|' << std::setw(4) << obj.get_y() << '|' << std::setw(2) << static_cast<unsigned short>(obj.get_size()) << '|' << std::setw(10) << obj.get_view() << '|' << obj.get_visibility() << '|';
}