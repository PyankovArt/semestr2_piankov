#include <iostream>

int main()
{
	int i=0;
	int x =5;
	while (x != 0) {
		std::cin >> x;
		if (x % 2 == 0) { i++; }

	}
	i = i - 1;
	std::cout << i;
	return 0;
	
}
