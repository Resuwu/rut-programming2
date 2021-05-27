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
	if (m_penny >= 100)
		change();
}

Money::Money(const unsigned int penny)
	: m_rubles(0), m_penny(penny)
{
	if (m_penny >= 100)
		change();
}

Money::Money(const Money& other)
	: Money(other.m_rubles, other.m_penny)
{
}

void Money::mul(const unsigned int x)
{
	m_rubles *= x;
	m_penny *= x;
	if (m_penny >= 100)
		change();
}

void Money::sum(const Money& other)
{
	m_rubles += other.m_rubles;
	m_penny += other.m_penny;
	if (m_penny >= 100)
		change();
}

void Money::sub(const Money& other)
{
	if (m_rubles >= other.m_rubles)
	{
		if (m_penny < other.m_penny)
		{
			if (m_rubles >= other.m_rubles + 1)
			{
				m_rubles -= 1;
				m_penny += 100;
			}
		}
		m_rubles -= other.m_rubles;
		m_penny -= other.m_penny;
	}
}

Money Money::div(const unsigned int x)
{
	unsigned int temp = m_rubles * 100 + m_penny;
	if (x <= temp)
	{
		m_rubles = 0;
		m_penny = temp / x;
		if (m_penny >= 100)
			change();
	}
	return Money(0, temp % x);
}

void Money::change()
{
	m_rubles += m_penny / 100;
	m_penny = m_penny % 100;
}