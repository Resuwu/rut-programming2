#pragma once
#include <cmath>
#include <ostream>

class functions
{
public:
	/**
	* \brief Параметризированный конструктор
	* \param x Значение x
	*/
	functions(const double x);

	/**
	* \brief Деструктор
	*/
	~functions() = default;

	//перегрузка оператора сдвига
	friend std::ostream& operator<<(std::ostream& os, const functions& obj);

	/**
	* \brief Метод возвращающий значение x
	* \return Значение x
	*/
	double get_x() const;

	/**
	* \brief Метод изменяющий значение x
	* \param Новое значение x
	*/
	void set_x(double x);

	/**
	* \brief Метод возвращающий функцию arcsin(x)
	* \return Значение arcsin(x)
	*/
	double get_arcsin() const;

	/**
	* \brief Метод возвращающий функцию arccos(x)
	* \return Значение arccos(x)
	*/
	double get_arccos() const;

	/**
	* \brief Метод считающий значения функций
	*/
	void calc_functions();
protected:
	/**
	* \brief Значение x
	*/
	double m_x;
private:
	/**
	* \brief Значение arcsin(x)
	*/
	double m_arcsin_x;

	/**
	* \brief Значение arccos(x)
	*/
	double m_arccos_x;
};

class derivative : protected functions
{
public:
	/**
	* \brief Конструктор
	*/
	derivative();

	/**
	* \brief Деструктор
	*/
	~derivative() = default;

	//перегрузка оператора сдвига
	friend std::ostream& operator<<(std::ostream& os, const derivative& obj);

	/**
	* \brief Метод возвращающий производную arcsin(x)'
	* \return Значение arcsin(x)'
	*/
	double get_der_arcsin() const;

	/**
	* \brief Метод возвращающий производную arccos(x)'
	* \return Значение arccos(x)'
	*/
	double get_der_arccos() const;

	/**
	* \brief Метод считающий значения производных
	*/
	void calc_derivatives();
protected:
	double get_x() const;
private:
	double m_der_arcsin;
	double m_der_arccos;
};