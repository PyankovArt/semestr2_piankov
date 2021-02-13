#include <iostream>

int main()
{
	int x = 5;
	int max = 0;
	while (x != 0) {
		std::cin >> x;
		if ((x % 2 == 0)&&(x>max)) { max=x;}

	}
	std::cout << max;
	return 0;

}
