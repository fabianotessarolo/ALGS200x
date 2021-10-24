#include <cstdio>
#include <iostream>

int sumOfTwoDigits(int a, int b) {
    return a+b;
}

int main() {
    int a;
    a = 2;
    int b = 1;
    printf("Result is: %d", sumOfTwoDigits(a, b));

    std::cin >> a;
    std::cin >> b;
    std::cout << a + b << std::endl;
    return 0;
}
