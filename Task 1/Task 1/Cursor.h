#pragma once
#include <string>
#include <ostream>
#include <iomanip>

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
    explicit Cursor(const unsigned int x, const unsigned int y, const unsigned char size, const Orientation& view,
		const bool is_visible, const unsigned int x_resolution, const unsigned int y_resolution, const unsigned char max_size, const unsigned char min_size);

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
	unsigned int get_x() const;

	/**
	 * \brief Метод, возвращающий координату Y
	 * \return Координату Y
	 */
	unsigned int get_y() const;

	/**
	 * \brief Метод, возвращающий размер курсора
	 * \return Размер курсора
	 */
	unsigned char get_size() const;

	/**
	 * \brief Метод, возвращающий вид курсора
	 * \return Вид курсора
	 */
	Orientation get_view() const;

	/**
	 * \brief Метод, возвращающий видимость курсора
	 * \return Видимость курсора
	 */
	bool get_visibility() const;

	/**
	 * \brief Метод, изменяющий положение курсора по оси X
	 * \param x Новое значение X
	 */
	void set_x(unsigned int x);

	/**
	 * \brief Метод, изменяющий положение курсора по оси Y
	 * \param x Новое значение Y
	 */
	void set_y(unsigned int y);

	/**
	 * \brief Метод, изменяющий размер курсора
	 * \param x Новое значение размера курсора
	 */
	void set_size(unsigned char size);

	/**
	 * \brief Метод, изменяющий вид курсора
	 * \param x Вид курсора
	 */
	void set_view(Orientation view);

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

	// Перегрузка оператора сдвига влево для enum класса Orientation
	friend std::ostream& operator<<(std::ostream& os, const Orientation& obj);

	// Перегрузка оператора сдвига влево для класса Cursor
	friend std::ostream& operator<<(std::ostream& os, const Cursor& obj);

private:
	/**
	 * \brief Координата по оси X
	 */
	unsigned int m_x;

	/**
	 * \brief Координата по оси Y
	 */
	unsigned int m_y;

	/**
	 * \brief Размер курсора
	 */
	unsigned char m_size;

	/**
	 * \brief Вид курсора
	 */
	Orientation m_view;

	/**
	 * \brief Видимость курсора
	 */
	bool m_is_visible;

	/**
	 * \brief Разрешение экрана по оси x
	 */
	unsigned int m_x_resolution;

	/**
	 * \brief Разрешение экрана по оси y
	 */
	unsigned int m_y_resolution;

	/**
	 * \brief Максимальный размер курсора
	 */
	unsigned char m_max_size;

	/**
	 * \brief Минимальный размер курсора
	 */
	unsigned char m_min_size;
};