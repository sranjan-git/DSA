#include <iostream>
#include <algorithm>

int main() {
    
    int arr[] = {9, 5, 11, 2};
    int size = sizeof(arr) / sizeof(arr[0]); 

    
    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

  
    std::sort(arr, arr + size);


    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
