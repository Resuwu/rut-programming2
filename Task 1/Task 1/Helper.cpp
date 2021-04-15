/**
* \brief Фунуция проверки попадания в интервал
* \param a Начало интервала
* \param b Конец интервала
* \param x Проверяемое число
* \return True - in range, false - out of range
*/
bool inRange(unsigned int a, unsigned int b, unsigned int x)
{
	return x >= a && x <= b;
}