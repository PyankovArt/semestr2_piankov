#include <iostream>
#include <math.h>

int main()
{
    int x;
    int a = 2;
    std::cin >> x;
    while (a <= x) {
        if (x % a == 0) {
            std::cout << a;
            std::cout<<std::endl;
            x = x / a;
            a = 2;
        }
        else {
            a++;
        }
    }
    return 0;
}