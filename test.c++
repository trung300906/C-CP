#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Lambda để kiểm tra điều kiện (ví dụ: số chẵn)
    auto isEven = [](int number) {
        return number % 2 == 0;
    };

    // Sử dụng remove_if để di chuyển phần tử không muốn về cuối dãy
    auto removeIt = std::remove_if(numbers.begin(), numbers.end(), isEven);

    // In dãy sau khi remove_if (chưa xóa thực sự)
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    // Sử dụng erase để xóa phần tử đã được di chuyển về cuối
    numbers.erase(removeIt, numbers.end());

    // In dãy sau khi xóa
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
