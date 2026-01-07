#include <iostream>
#include <cmath>

int main() {
    std::cout << "Hello, Practice Bag!" << std::endl;
    // 示例: 计算并输出一组随机数
    double random_numbers[] = {16.0, 25.0, 36.0, 49.0, 64.0};
    for (double num : random_numbers) {
        double result = std::sqrt(num);
        std::cout << "The square root of " << num << " is " << result << std::endl;
    }
    return 0;
}
