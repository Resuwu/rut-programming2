#include <iostream>
#include "Pair.h"

int main()
{
	Pair test_pair_1(1, 3);
	Pair test_pair_2(3, -6);

	std::cout << "------------------------------------------TESTPAIR" << std::endl;

	std::cout << test_pair_1 << " | " << test_pair_2 << std::endl;

	test_pair_1.sum(test_pair_2);
	std::cout << test_pair_1 << std::endl;

	test_pair_1.mul(2);
	std::cout << test_pair_1 << std::endl;

	Money test_money_1(101, 33);
	Money test_money_2(23, 56);

	std::cout << "------------------------------------------TESTMONEY" << std::endl;

	std::cout << test_money_1 << " | " << test_money_2 << std::endl;

	test_money_1.sum(test_money_2);
	std::cout << test_money_1 << std::endl;

	test_money_1.mul(2);
	std::cout << test_money_1 << std::endl;

	test_money_1.div(2);
	std::cout << test_money_1 << std::endl;

	test_money_1.sub(test_money_2);
	std::cout << test_money_1 << std::endl;

	std::cout << "------------------------------------------TESTDIV" << std::endl;

	Money rem = test_money_1.div(3);
	std::cout << test_money_1 << std::endl;
	std::cout << rem << std::endl;

	system("pause");
	return 0;
}