#include <iostream>
#include <cmath>
#include <vector>

void radix_lsd(int *arr, size_t arr_size){

    int max_number = 0;
    int max_number_size = 1;

    for (int i = 0; i < arr_size; ++i) {
        max_number = std::max(max_number, arr[i]);
    }

    while ((max_number /= 10) > 0) {
        max_number_size++;
    }

    int base = 10;
    std::vector<std::vector<int>> temp(base, std::vector<int>());

    for (int i = 0; i < max_number_size; ++i) {
        for (int j = 0; j < arr_size; ++j) {
            int digit = int(arr[j] / pow(base, i)) % base;
            temp[digit].push_back(arr[j]);
        }

        int j = 0;
        for (auto &vec : temp) {
            for (int number : vec) {
                arr[j] = number;
                j++;
            }

            vec.clear();
        }
    }
}

int main(){
    std::cout << "\nBefore sort: ";
    int arr[] = {329, 457, 657, 839, 436, 720, 355};
    for (int a : arr) {
        std::cout << a << ' ';
    }

    std::cout << "\nAfter sort: ";
    radix_lsd(arr, std::size(arr));
    for (int a : arr) {
        std::cout << a << ' ';
    }
}