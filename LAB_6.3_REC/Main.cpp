#include <iostream>
#include <iomanip>
#include <vector>

void fillArrayRecursive(int arr[], int size, int currentIndex) {
    if (currentIndex < size) {
        std::cin >> arr[currentIndex];
        fillArrayRecursive(arr, size, currentIndex + 1);
    }
}

void printArrayRecursive(const int arr[], int size, int currentIndex) {
    if (currentIndex < size) {
        std::cout << arr[currentIndex] << std::setw(4);
        printArrayRecursive(arr, size, currentIndex + 1);
    }
    else {
        std::cout << std::endl;
    }
}

int countNegativeElementsRecursive(const int arr[], int size, int currentIndex) {
    if (currentIndex < size) {
        return (arr[currentIndex] < 0 ? 1 : 0) + countNegativeElementsRecursive(arr, size, currentIndex + 1);
    }
    else {
        return 0;
    }
}

template <typename T>
int countNegativeElementsTRecursive(const std::vector<T>& arr, size_t currentIndex) {
    if (currentIndex < arr.size()) {
        return (arr[currentIndex] < 0 ? 1 : 0) + countNegativeElementsTRecursive(arr, currentIndex + 1);
    }
    else {
        return 0;
    }
}

int main() {
    int size;

    std::cout << "Enter the size of the array: ";
    std::cin >> size;

    if (size <= 0) {
        std::cerr << "Invalid array size\n";
        return 1;
    }

    int* arr = new int[size];

    fillArrayRecursive(arr, size, 0);
    printArrayRecursive(arr, size, 0);

    int result = countNegativeElementsRecursive(arr, size, 0);
    std::cout << "Number of negative elements in array: " << result << std::endl;

    std::vector<int> vec(arr, arr + size);

    int resultVector = countNegativeElementsTRecursive(vec, 0);
    std::cout << "Number of negative elements in vector <T>: " << resultVector << std::endl;

    delete[] arr;

    return 0;
}
