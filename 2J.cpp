#include <iostream>

int main()
{
	int x;
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> x;
	if (x >= 216000) {
		a = x / 2160000;
		for (int i = 1; i <= a; i++) {
			std::cout << '<';
		}

		b = x / 216000 - a * 10;
		for (int i = 1; i <= b; i++) {
			std::cout << 'v';
		}

		std::cout << '.';

		a = 0;
		b = 0;

		x = x % 216000;

		if (x >= 3600) {
			a = x / 36000;
			for (int i = 1; i <= a; i++) {
				std::cout << '<';
			}
			b = x / 3600 - a * 10;
			for (int i = 1; i <= b; i++) {
				std::cout << 'v';
			}
		}

		std::cout << '.';

		a = 0;
		b = 0;

		x = x % 3600;

		if (x >= 60) {
			a = x / 600;
			for (int i = 1; i <= a; i++) {
				std::cout << '<';
			}
			b = x / 60 - a * 10;
			for (int i = 1; i <= b; i++) {
				std::cout << 'v';
			}
		}

		std::cout << '.';

		a = 0;
		b = 0;

		x = x % 60;
		if (x >= 1) {
			a = x / 10;
			for (int i = 1; i <= a; i++) {
				std::cout << '<';
			}
			b = x - a * 10;
			for (int i = 1; i <= b; i++) {
				std::cout << 'v';
			}
		}
	}
	else if (x >= 3600) {
		a = x / 36000;
		for (int i = 1; i <= a; i++) {
			std::cout << '<';
		}
		b = x / 3600 - a * 10;
		for (int i = 1; i <= b; i++) {
			std::cout << 'v';
		}
		std::cout << '.';

		a = 0;
		b = 0;

		x = x % 3600;

		if (x >= 60) {
			a = x / 600;
			for (int i = 1; i <= a; i++) {
				std::cout << '<';
			}
			b = x / 60 - a * 10;
			for (int i = 1; i <= b; i++) {
				std::cout << 'v';
			}
		}

		std::cout << '.';

		a = 0;
		b = 0;

		x = x % 60;
		if (x >= 1) {
			a = x / 10;
			for (int i = 1; i <= a; i++) {
				std::cout << '<';
			}
			b = x - a * 10;
			for (int i = 1; i <= b; i++) {
				std::cout << 'v';
			}
		}
	}
	else if (x >= 60) {
	a = x / 600;
	for (int i = 1; i <= a; i++) {
		std::cout << '<';
	}
	b = x / 60 - a * 10;
	for (int i = 1; i <= b; i++) {
		std::cout << 'v';
	}
	std::cout << '.';

	a = 0;
	b = 0;

	x = x % 60;
	if (x >= 1) {
		a = x / 10;
		for (int i = 1; i <= a; i++) {
			std::cout << '<';
		}
		b = x - a * 10;
		for (int i = 1; i <= b; i++) {
			std::cout << 'v';
		}
	}
	}
	else if (x >= 1) {
	a = x / 10;
	for (int i = 1; i <= a; i++) {
		std::cout << '<';
	}
	b = x - a * 10;
	for (int i = 1; i <= b; i++) {
		std::cout << 'v';
	}
}
}