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
	unsigned int GetX() const;

	/**
	 * \brief Метод, возвращающий координату Y
	 * \return Координату Y
	 */
	unsigned int GetY() const;

	/**
	 * \brief Метод, возвращающий размер курсора
	 * \return Размер курсора
	 */
	unsigned char GetSize() const;

	/**
	 * \brief Метод, возвращающий вид курсора
	 * \return Вид курсора
	 */
	Orientation GetView() const;

	/**
	 * \brief Метод, возвращающий видимость курсора
	 * \return Видимость курсора
	 */
	bool GetIsVisible() const;

	/**
	 * \brief Метод, изменяющий положение курсора по оси X
	 * \param x Новое значение X
	 */
	void SetX(unsigned int x);

	/**
	 * \brief Метод, изменяющий положение курсора по оси Y
	 * \param x Новое значение Y
	 */
	void SetY(unsigned int y);

	/**
	 * \brief Метод, изменяющий размер курсора
	 * \param x Новое значение размера курсора
	 */
	void SetSize(unsigned char size);

	/**
	 * \brief Метод, изменяющий вид курсора
	 * \param x Вид курсора
	 */
	void SetView(Orientation view);

	/**
	 * \brief Метод, гасящий курсор
	 * \param isVisible Видимость курсора
	 */
	void Hide();

	/**
	 * \brief Метод, востанавливаюций курсор
	 * \param isVisible Видимость курсора
	 */
	void Show();

private:
	/**
	 * \brief Координата по оси X
	 */
	unsigned int X;

	/**
	 * \brief Координата по оси Y
	 */
	unsigned int Y;

	/**
	 * \brief Размер курсора
	 */
	unsigned char Size;

	/**
	 * \brief Вид курсора
	 */
	Orientation View;

	/**
	 * \brief Видимость курсора
	 */
	bool IsVisible;
};