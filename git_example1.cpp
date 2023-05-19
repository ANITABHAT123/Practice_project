#include <iostream>

int fun_calculateSum(int a, int b) {
    int sum = a - b;
    return sum;
}

int main() {
    int x = 500;
    int y = 100;
    int result =fun_calculateSum(x, y);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
