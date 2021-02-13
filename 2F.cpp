#include <iostream>

int main()
{
	int max = 0;
	int x = 0;
	int s = 0;
	do
	{
		std::cin >> x;
		
		if (x == max) 
		{ 
			s++; 
		}
		else if (x > max)
		{
			max = x;
			s = 1;
		}
	} while (x != 0);

	std::cout << s;
	return 0;
}