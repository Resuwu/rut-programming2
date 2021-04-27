/**
* \brief Фунуция проверки попадания в интервал для unsigned int
* \param a Начало интервала
* \param b Конец интервала
* \param x Проверяемое число
* \return True - in range, false - out of range
*/
inline bool In_range_for_int(unsigned int max, unsigned int x)
{
	return x <= max;
}

/**
* \brief Фунуция проверки попадания в интервал для unsigned char
* \param a Начало интервала
* \param b Конец интервала
* \param x Проверяемое число
* \return True - in range, false - out of range
*/
inline bool In_range_for_char(unsigned char min, unsigned char max, unsigned char x)
{
	return x >= min && x <= max;
}