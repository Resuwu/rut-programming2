#pragma once

enum class Orientation
{
	Horisontal,
	Vertical
};

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
	 * \param view Вид курсора
	 * \param isVisible Видимость курсора
	 */
	Cursor(int x, int y, int size, Orientation view, bool isVisible);

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
	Orientation getView() const;

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
	void setView(Orientation view);

	/**
	 * \brief Метод, переключающий видимость курсора
	 * \param isVisible Видимость курсора
	 */
	void changeVisibility(bool isVisible);

private:
	/**
	 * \brief Координата по оси X
	 */
	int x;

	/**
	 * \brief Координата по оси Y
	 */
	int y;

	/**
	 * \brief Размер курсора
	 */
	int size;

	/**
	 * \brief Вид курсора
	 */
	Orientation view;

	/**
	 * \brief Видимость курсора
	 */
	bool isVisible;
};