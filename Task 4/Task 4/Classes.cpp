#include "Classes.h"

functions::functions(const double x = 0)
{
	set_x(x);
	calc_functions();
};

std::ostream& operator<<(std::ostream& os, const functions& obj)
{
	return os << "X = " << obj.get_x() << "; Arcsin(x) = " << obj.get_arcsin() << "; Arccos(x) = " << obj.get_arccos() << ";";
}

void functions::calc_functions()
{
	m_arcsin_x = asin(m_x);
	m_arccos_x = acos(m_x);
}

double functions::get_x() const
{
	return m_x;
};

void functions::set_x(double x) throw (std::invalid_argument)
{
	if (x <= 1 && x >= -1)
		m_x = x;
	else
		throw (std::invalid_argument("Value should be in [-1;1] interval!\n"));
};

double functions::get_arcsin() const
{
	return m_arcsin_x;
}

double functions::get_arccos() const
{
	return m_arccos_x;
}

derivative::derivative()
{
	calc_derivatives();
}

std::ostream& operator<<(std::ostream& os, const derivative& obj)
{
	return os << "Derivatives: Arcsin(x)' = " << obj.get_der_arcsin() << "; Arccos(x)' = " << obj.get_der_arccos() << ";";
}

void derivative::calc_derivatives()
{
	m_der_arcsin = (1 / sqrt(1 - pow(get_x(), 2)));
	m_der_arccos = -(1 / sqrt(1 - pow(get_x(), 2)));
}

double derivative::get_der_arcsin() const
{
	return m_der_arcsin;
};

double derivative::get_der_arccos() const
{
	return m_der_arccos;
};

double derivative::get_x() const
{
	return m_x;
}