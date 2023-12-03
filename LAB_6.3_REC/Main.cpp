#include <iostream>
#include <iomanip>

void fillArrayRecursive(int arr[], int size, int index = 0) {
    if (index == size) {
        return;
    }

    std::cout;
    std::cin >> arr[index];

    fillArrayRecursive(arr, size, index + 1);
}

void printArrayRecursive(const int arr[], int size, int index = 0) {
    if (index == size) {
        std::cout << std::endl;
        return;
    }

    std::cout << arr[index] << std::setw(4);
    printArrayRecursive(arr, size, index + 1);
}

template <typename T>
void fillArrayRecursive(T arr[], int size, int index = 0) {
    if (index == size) {
        return;
    }

    std::cout;
    std::cin >> arr[index];

    fillArrayRecursive(arr, size, index + 1);
}

template <typename T>
void printArrayRecursive(const T arr[], int size, int index = 0) {
    if (index == size) {
        std::cout << std::endl;
        return;
    }

    std::cout << arr[index] << std::setw(4);
    printArrayRecursive(arr, size, index + 1);
}

int countNegativeElementsRecursive(const int arr[], const int size, int index = 0) {
    if (index == size) {
        return 0;
    }

    return (arr[index] < 0 ? 1 : 0) + countNegativeElementsRecursive(arr, size, index + 1);
}

template <typename T>
int countNegativeElementsTRecursive(const T arr[], const int size, int index = 0) {
    if (index == size) {
        std::cout << std::endl;
        return 0;
    }

    int count = (arr[index] < 0 ? 1 : 0);
    return count + countNegativeElementsTRecursive(arr, size, index + 1);
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

    fillArrayRecursive(arr, size);
    printArrayRecursive(arr, size);

    std::cout << "Enter elements <T>: \n";

    double* arrDouble = new double[size];
    fillArrayRecursive(arrDouble, size);
    printArrayRecursive(arrDouble, size);

    int result = countNegativeElementsRecursive(arr, size);
    std::cout << "Number of negative elements in array: " << result << std::endl;

    int resultArrayT = countNegativeElementsTRecursive(arr, size);
    std::cout << "Number of negative elements in array <T>: " << resultArrayT << std::endl;

    delete[] arr;
    delete[] arrDouble;

    return 0;
}
