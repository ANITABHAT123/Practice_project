#include <iostream>

int calculateSum(int a, int b) {
    int sum = a + b;
    cout << "this os changed \n ";
    return sum;
}

int main() {
    int x = 54;
    int y = 10;
    int result = calculateSum(x, y);

    std::cout << "Result: " << result << std::endl;

    return 0;
}

