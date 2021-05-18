#pragma once
#include <ostream>
#include <iomanip>

class Pair
{
public:
	friend std::ostream& operator<<(std::ostream& os, const Pair& obj);

	Pair(const int a, const int b);

	Pair(const Pair& other);

	~Pair() = default;

	virtual void mul(int x);

	virtual void sum(const Pair& other);

private:

	int m_a;

	int m_b;
};

class Money : public Pair
{
public:
	friend std::ostream& operator<<(std::ostream& os, const Money& obj);

	Money(const unsigned int a, const unsigned int b);

	Money(const Money& other);

	~Money() = default;

	virtual void mul(const unsigned int x);

	virtual void sum(const Money& other);

	void sub(const Money& other);

	Money div(const unsigned int x);

private:

	unsigned int m_rubles;

	unsigned int m_penny;
};