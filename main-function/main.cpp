#include <iostream>
#include <vector>
#include <algorithm>
#include "halfDivisionSearch.h"
#include "binarySearch.h"

int main() {
    int rows, cols, key;

    std::cout << "Введіть кількість рядків і стовпців матриці: ";
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    std::cout << "Введіть елементи матриці:\n";
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            std::cin >> matrix[i][j];

    std::cout << "Введіть ключ для пошуку: ";
    std::cin >> key;

    for (int i = 0; i < rows; ++i) {
        std::vector<int> row = matrix[i];
        std::sort(row.begin(), row.end());

        int resultHalf = halfDivisionSearch(row, key);
        int resultBinary = binarySearch(row, key);

        std::cout << "Рядок " << i << ": ";
        if (resultHalf != -1)
            std::cout << "HalfDivisionSearch: знайдено на позиції " << resultHalf << "; ";
        else
            std::cout << "HalfDivisionSearch: не знайдено; ";

        if (resultBinary != -1)
            std::cout << "BinarySearch: знайдено на позиції " << resultBinary << "\n";
        else
            std::cout << "BinarySearch: не знайдено\n";
    }

    return 0;
}
