#include <iostream>
#include <iomanip>

template <typename T>
void printArray(const T arr[], const int size, int index = 0) {
    if (index == size) {
        std::cout << std::endl;
        return;
    }

    std::cout << arr[index] << std::setw(4);
    printArray(arr, size, index + 1);
}

int countNegativeElements(const int arr[], const int size, int index = 0) {
    if (index == size) {
        return 0;
    }

    return (arr[index] < 0 ? 1 : 0) + countNegativeElements(arr, size, index + 1);
}

template <typename T>
int countNegativeElementsT(const T arr[], const int size, int index = 0) {
    if (index == size) {
        return 0;
    }

    int count = (arr[index] < 0 ? 1 : 0) + countNegativeElementsT(arr, size, index + 1);

    if (index == 0) {
        std::cout << "Number of negative elements in array <T>: " << count << std::endl;
    }

    return count;
}

int main() {
    int arr[] = { -1, 2, 3, -4, 5 };
    const int arrSize = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, arrSize);

    int result = countNegativeElements(arr, arrSize);
    std::cout << "Number of negative elements in array: " << result << std::endl;

    int resultArrayT = countNegativeElementsT(arr, arrSize);

    return 0;
}