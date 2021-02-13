#include <iostream>
#include <math.h>

int main()
{
	int year = 0;
	std::cin >> year;
	std::cout << std::endl;
	if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) { std::cout << "YES";}else
	{
		std::cout << "NO";
	}
}