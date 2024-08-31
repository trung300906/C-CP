#include <iostream>
#include <vector>

int main() {
    std::vector<int> temp_ans = {1, 2, 3};

    if (!temp_ans.empty()) {
        std::cout << "Vector temp_ans is not empty. It contains:";
        for (int elem : temp_ans) {
            std::cout << " " << elem;
        }
        std::cout << std::endl;
    } else {
        std::cout << "Vector temp_ans is empty." << std::endl;
    }

    return 0;
}
