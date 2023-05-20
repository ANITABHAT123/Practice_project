#include <iostream>

int fun2_calculateSum(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int x = 5;
    int y = 10;
    int result = fun2_calculateSum(x, y);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
