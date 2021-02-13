#include <iostream>
#include <string>

int main()
{
    int shet=0;
    int sum=0;
    int x;
    std::string num;
    std::string boss = "A999AA";

    while (shet == 0) {
        std::cin >> x >> num;
        if (num != boss) {
            if (x > 60) {
                if ((num[1] == num[2]) and (num[2] == num[3])) {
                    sum = sum + 1000;
                }
                else if ((num[1] == num[2]) or (num[1] == num[3]) or (num[2] == num[3])) {
                    sum = sum + 500;
                } else { sum = sum + 100; }
            }
        }
        else { shet++; }
    }
    std::cout << sum;
}
