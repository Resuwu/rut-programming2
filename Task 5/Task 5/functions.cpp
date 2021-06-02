#include <iostream>
#include <cmath>

//Точка
struct point
{
	double x;
	double y;
};

//Перегрузка оператора сравнения для структуры point
inline bool operator==(const point& obj1, const point& obj2)
{
	return ((obj1.x == obj2.x) && (obj1.y == obj2.y));
}

//Мой класс исключений
class my_exception
{
public:
	std::string e;
	my_exception(std::string str)
		:	e(str)
	{
	}
	std::string what()
	{
		return e;
	}
};

//Пустой класс
class null_exception
{
};

//Мое исключение, наследник стандартного класса exception
class invalid_value : public std::exception
{
public:
	const char* what() const throw()
	{
		return "Error, points are the same\n";
	}
};

//без спецификации исключений
inline double length_1(const point& p1, const point& p2)
{
	if (p1 == p2)
		throw 'e';
	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
};

//со спецификацией throw();
inline double length_2(const point& p1, const point& p2) throw()
{
	if (p1 == p2)
		throw 'e';
	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
};

//с конкретной спецификацией с подходящим стандартным исключением;
inline double length_3(const point& p1, const point& p2) throw(std::invalid_argument)
{
	if (p1 == p2)
		throw std::invalid_argument("Error, points are the same\n");
	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}

//Спецификация с собственным реализованным исключением (независимый класс с полями-параметрами функции)
inline double length_4_1(const point& p1, const point& p2) throw(my_exception)
{
	if (p1 == p2)
		throw my_exception("Error, points are the same\n");
	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}

//Спецификация с собственным реализованным исключением (пустой класс)
inline double length_4_2(const point& p1, const point& p2) throw(null_exception)
{
	if (p1 == p2)
		throw null_exception();
	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}

//Спецификация с собственным реализованным исключением (наследник от стандартного исключения с полями)
inline double length_4_3(const point& p1, const point& p2)
{
	if (p1 == p2)
		throw invalid_value();
	return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
}