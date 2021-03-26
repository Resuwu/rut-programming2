#pragma once

/**
 * \brief Класс курсор.
 */
class Cursor
{
public:
	/**
	 * \brief Конструктор по умолчанию.
	 */
	Cursor();
	/**
	 * \brief Параметризованный конструктор.
	 * \param x Координата X
	 * \param y Координата Y
	 * \param size Размер курсора
	 * \param type Вид курсора
	 */
	Cursor(int x, int y, int size, bool type);
	/**
	 * \brief Деструктор
	 */
	~Cursor();

	/**
	 * \brief Метод, возвращающий координату X
	 * \return Координату X
	 */
	int getX() const;
	/**
	 * \brief Метод, возвращающий координату Y
	 * \return Координату Y
	 */
	int getY() const;
	/**
	 * \brief Метод, возвращающий размер курсора
	 * \return Размер курсора
	 */
	int getSize() const;
	/**
	 * \brief Метод, возвращающий вид курсора
	 * \return Вид курсора
	 */
	bool getType() const;
	/**
	 * \brief Метод, изменяющий положение курсора по оси X
	 * \param x Новое значение X
	 */
	void setX(int x);
	/**
	 * \brief Метод, изменяющий положение курсора по оси Y
	 * \param x Новое значение Y
	 */
	void setY(int y);
	/**
	 * \brief Метод, изменяющий размер курсора
	 * \param x Новое значение размера курсора
	 */
	void setSize(int size);
	/**
	 * \brief Метод, изменяющий вид курсора
	 * \param x Вид курсора
	 */
	void setType(bool type);
	/**
	 * \brief Метод, переключающий видимость курсора
	 */
	void toggleInvis();

private:
	/**
	 * \brief Координата по оси X
	 */
	int X;
	/**
	 * \brief Координата по оси Y
	 */
	int Y;
	/**
	 * \brief Размер курсора
	 */
	int Size;
	/**
	 * \brief Вид курсора
	 */
	bool Type;
};