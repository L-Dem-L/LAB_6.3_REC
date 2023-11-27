#include <iostream>
#include <iomanip>
#include <vector>

template <typename T>
void printArrayRecursive(const T arr[], const int size, int index = 0) {
    if (index == size) {
        std::cout << std::endl;
        return;
    }

    std::cout << arr[index] << std::setw(4);
    printArrayRecursive(arr, size, index + 1);
}

template <typename T>
void printArray(const T arr[], const int size) {
    std::cout << "Array: ";
    printArrayRecursive(arr, size);
}

int countNegativeElementsRecursive(const int arr[], const int size, int index = 0) {
    if (index == size) {
        return 0;
    }

    return (arr[index] < 0 ? 1 : 0) + countNegativeElementsRecursive(arr, size, index + 1);
}

template <typename T>
int countNegativeElementsT(const std::vector<T>& arr, int index = 0) {
    if (index == arr.size()) {
        return 0;
    }

    int count = (arr[index] < 0 ? 1 : 0) + countNegativeElementsT(arr, index + 1);

    if (index == 0) {
        std::cout << "Number of negative elements in vector <T>: " << count << std::endl;
    }

    return count;
}

int main() {
    int arr[] = { -1, 2, 3, -4, 5 };
    const int arrSize = std::size(arr);

    printArray(arr, arrSize);

    int result = countNegativeElementsRecursive(arr, arrSize);
    std::cout << "Number of negative elements in array: " << result << std::endl;

    std::vector<int> vec(arr, arr + arrSize);

    int resultVector = countNegativeElementsT(vec);

    return 0;
}
