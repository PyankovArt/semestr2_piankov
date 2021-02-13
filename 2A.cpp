#include <iostream>

int main()
{
    int a;
    int b;
    int c;
    int shet=0;
    int del=0;
    std::cin >> a;
    std::cin >> b;
    if (a < b) {
        c = a;
        a = b;
        b = c;
    }
    c = 0;
    while (shet == 0) {
        if (a % b == 0) {
            del = b;
            shet = 1;
        }
        else {
            c = a % b;
            a = b;
            b = c;
            c = 0;
        }
    }
    std::cout << del;
    return 0;
}
