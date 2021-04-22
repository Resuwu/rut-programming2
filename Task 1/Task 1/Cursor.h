#pragma once

/**
 * \brief Ориентация курсора.
 */
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
	 * \brief Параметризованный конструктор.
	 * \param x Координата X
	 * \param y Координата Y
	 * \param size Размер курсора
	 * \param view Вид курсора
	 * \param isVisible Видимость курсора
	 */
	Cursor(unsigned int x, unsigned int y, unsigned char size, Orientation view, bool isVisible);

	/**
	 * \brief Конструктор копирования.
	 * \param other Копируемый курсор.
	 */
	Cursor(const Cursor& other);

	/**
	 * \brief Деструктор
	 */
	~Cursor() = default;

	/**
	 * \brief Метод, возвращающий координату X
	 * \return Координату X
	 */
	unsigned int getX() const;

	/**
	 * \brief Метод, возвращающий координату Y
	 * \return Координату Y
	 */
	unsigned int getY() const;

	/**
	 * \brief Метод, возвращающий размер курсора
	 * \return Размер курсора
	 */
	unsigned char getSize() const;

	/**
	 * \brief Метод, возвращающий вид курсора
	 * \return Вид курсора
	 */
	Orientation getView() const;

	/**
	 * \brief Метод, возвращающий видимость курсора
	 * \return Видимость курсора
	 */
	bool getIsVisible() const;

	/**
	 * \brief Метод, изменяющий положение курсора по оси X
	 * \param x Новое значение X
	 */
	void setX(unsigned int x);

	/**
	 * \brief Метод, изменяющий положение курсора по оси Y
	 * \param x Новое значение Y
	 */
	void setY(unsigned int y);

	/**
	 * \brief Метод, изменяющий размер курсора
	 * \param x Новое значение размера курсора
	 */
	void setSize(unsigned char size);

	/**
	 * \brief Метод, изменяющий вид курсора
	 * \param x Вид курсора
	 */
	void setView(Orientation view);

	/**
	 * \brief Метод, гасящий курсор
	 * \param isVisible Видимость курсора
	 */
	void hide();

	/**
	 * \brief Метод, востанавливаюций курсор
	 * \param isVisible Видимость курсора
	 */
	void show();

private:
	/**
	 * \brief Координата по оси X
	 */
	unsigned int x;

	/**
	 * \brief Координата по оси Y
	 */
	unsigned int y;

	/**
	 * \brief Размер курсора
	 */
	unsigned char size;

	/**
	 * \brief Вид курсора
	 */
	Orientation view;

	/**
	 * \brief Видимость курсора
	 */
	bool isVisible;
};