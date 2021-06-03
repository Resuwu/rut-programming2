#include "Pair.h"

std::ostream& operator<<(std::ostream& os, const Pair& obj)
{
	return os << "(" << obj.m_a << ", " << obj.m_b << ")";
}

Pair::Pair(const int a = 0, const int b = 0)
	: m_a(a), m_b(b)
{
}

Pair::Pair(const Pair& other)
	: Pair(other.m_a, other.m_b)
{
}

void Pair::mul(const int x)
{
	m_a *= x;
	m_b *= x;
}

void Pair::sum(const Pair& other)
{
	m_a += other.m_a;
	m_b += other.m_b;
}

std::ostream& operator<<(std::ostream& os, const Money& obj)
{
	return os << obj.m_rubles << "," << std::setw(2) << std::setfill('0') << obj.m_penny << " rub.";
}

Money::Money(const unsigned int rubles, const unsigned int penny)
	: m_rubles(rubles), m_penny(penny)
{
	exchange_to_rubles();
}

Money::Money(const unsigned int penny)
	: m_rubles(0), m_penny(penny)
{
	exchange_to_rubles();
}

Money::Money(const Money& other)
	: Money(other.m_rubles, other.m_penny)
{
}

void Money::mul(const unsigned int x)
{
	m_rubles *= x;
	m_penny *= x;
	exchange_to_rubles();
}

void Money::sum(const Money& other)
{
	m_rubles += other.m_rubles;
	m_penny += other.m_penny;
	exchange_to_rubles();
}

void Money::sub(const Money& other) throw(std::invalid_argument)
{
	if (exchange_to_penny() > other.exchange_to_penny())
	{
		m_penny = exchange_to_penny() - other.exchange_to_penny();
		m_rubles = 0;
		exchange_to_rubles();
	}
	else
		throw(std::invalid_argument("Error, not enough money!\n"));
}

Money Money::div(const unsigned int x) throw(std::invalid_argument)
{
	m_penny = exchange_to_penny();
	m_rubles = 0;
	if (x <= m_penny)
	{
		unsigned int temp = m_penny % x;
		m_penny /= x;
		exchange_to_rubles();
		return Money(0, temp);
	}
	else
		throw(std::invalid_argument("Error, not enough money!\n"));
}

void Money::exchange_to_rubles()
{
	if (m_penny >= 100)
	{
		m_rubles += m_penny / 100;
		m_penny = m_penny % 100;
	}
}

unsigned int Money::exchange_to_penny() const
{
	return m_penny + m_rubles * 100;
}