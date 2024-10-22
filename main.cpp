#include <iostream>

bool checkPrime(int x) {
    if (x == 2) {
        return true;
    }
    else if (x == 3) {
        return true;
    }
    else if (x == 5) {
        return true;
    }
    else if (x == 7) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    std::cout << "Input a number from 0 to 9" << '\n';

    int number{};
    std::cin >> number;

    if (checkPrime(number))
        std::cout << "The number is prime" << '\n';
    else
        std::cout << "The number is not prime" << "\n";

    return 0;
}