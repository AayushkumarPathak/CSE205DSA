#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    // Create a dynamic array of size n
    int* arr = new int[n];

    std::cout << "Enter " << n << " space-separated elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    int target;
    std::cout << "Enter the element to search for: ";
    std::cin >> target;

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        std::cout << "Item found." << std::endl;
    } else {
        std::cout << "Item not found." << std::endl;
    }

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}
