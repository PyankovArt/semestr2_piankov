#include <iostream>
#include <math.h>

int main()
{
	int x;
	int a=2;
	int del = 1;
	int max;
	std::cin >> x;
	max = floor(sqrt(x));
	while ((del == 1) && (a <= max)) {
		if (x % a == 0) { del=del-1; }
		a++;
	}
	std::cout << del;


	return 0;

}
