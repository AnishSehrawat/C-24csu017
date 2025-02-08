#include <iostream>
#include <vector>

void printSpiral(int n) {
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n));
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;

    while (value <= n * n) {
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = value++;
        }
        top++;
        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = value++;
        }
        right--;
        for (int i = right; i >= left; --i) {
            matrix[bottom][i] = value++;
        }
        bottom--;
        for (int i = bottom; i >= top; --i) {
            matrix[i][left] = value++;
        }
        left++;
    }

    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << "\t";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter the size of the matrix: ";
    std::cin >> n;
    printSpiral(n);
    return 0;
}