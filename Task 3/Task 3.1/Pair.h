#pragma once
#include <ostream>
#include <iomanip>

class Pair
{
public:
	//перегрузка оператора сдвига
	friend std::ostream& operator<<(std::ostream& os, const Pair& obj);

	/**
	* \brief Параметризированный конструктор
	* \param a Первое число
	* \param b Второе число
	*/
	Pair(const int a, const int b);

	/**
	* \brief Конструктор копирования
	* \param other Копируемый объект
	*/
	Pair(const Pair& other);

	/**
	* \brief Конструктор перемещения
	*/
	Pair(Pair&& other) = default;

	/**
	* \brief Деструктор
	*/
	~Pair() = default;


	/**
	* \brief Метод умножения на число
	* \param x Множитель
	*/
	virtual void mul(int x);

	/**
	* \brief Метод сложения
	* \param other Слагаемое
	*/
	virtual void sum(const Pair& other);

private:

	/**
	* \brief Первое число
	*/
	int m_a;

	/**
	* \brief Второе число
	*/
	int m_b;
};

class Money : public Pair
{
public:
	//перегрузка оператора сдвига
	friend std::ostream& operator<<(std::ostream& os, const Money& obj);

	/**
	* \brief Параметризированный конструктор
	* \param rubles Количество рублей
	* \param penny Количество копеек
	*/
	Money(const unsigned int rubles, const unsigned int penny);

	/**
	* \brief Конструктор для копеек
	* \param penny Количество копеек
	*/
	Money(const unsigned int penny);

	/**
	* \brief Конструктор копирования
	* \param other Копируемый объект
	*/
	Money(const Money& other);

	/**
	* \brief Конструктор перемещения
	*/
	Money(Money&& other) = default;

	/**
	* \brief Деструктор
	*/
	~Money() = default;

	/**
	* \brief Метод умножения на число
	* \param x Множитель
	*/
	virtual void mul(const unsigned int x);

	/**
	* \brief Метод сложения
	* \param other Слагаемое
	*/
	virtual void sum(const Money& other);

	/**
	* \brief Метод вычитания
	* \param other Вычитаемое
	*/
	void sub(const Money& other);

	/**
	* \brief Метод деления на число
	* \param other Делитель
	*/
	Money div(const unsigned int x);

	/**
	* \brief Метод перевода копеек в рубли
	*/
	void exchange_to_rubles();

	/**
	* \brief Метод перевода рублей в копейки
	*/
	unsigned int exchange_to_penny() const;

private:

	/**
	* \brief Рубли
	*/
	unsigned int m_rubles;

	/**
	* \brief Копейки
	*/
	unsigned int m_penny;
};