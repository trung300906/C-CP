#include <iostream>
#include <vector>

void generateCombinations(const std::vector<int>& arr, std::vector<int>& result, int currentIndex, int n, int z) {
    if (z == 0) {
        // In ra tổ hợp hiện tại
        for (int i = 0; i < result.size(); ++i) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
        return;
    }

    for (int i = 0; i < n; ++i) {
        result.push_back(arr[i]);
        generateCombinations(arr, result, i, n, z - 1);
        result.pop_back();
    }
}

void generateAllCombinations(const std::vector<int>& arr, int z) {
    int n = arr.size();
    std::vector<int> result;
    generateCombinations(arr, result, 0, n, z);
}

int main() {
    std::vector<int> arr = {4,2,13,7,5,10};
    int z = 3; // Số bậc

    generateAllCombinations(arr, z);

    return 0;
}
