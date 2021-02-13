#include <iostream>

int main()
{
    int x;
    int osh=0;

    
    std::cin >> x;


    while ((osh==0)&&(x!=1)) {
        if (x % 2 == 1) { osh++; }
        x = x / 2;
    }
    
    if (osh == 0) { std::cout<< "YES"; }
    else { std::cout << "NO"; }
    return 0;
}
