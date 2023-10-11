#include <iostream>
#include <cmath>
#include <vector>

void radix_msd(int *arr, size_t arr_size){
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

        int k = 0;

        for (int j = 0; j < arr_size; ++j) {
            if (i == 0) {
                int digit = int(arr[j] / pow(base, max_number_size - i - 1)) % base;
                temp[digit].push_back(arr[j]);
            }

            else {
                int prev_digit = int(arr[j] / pow(base, max_number_size - i)) % base;
                for (; int(arr[j] / pow(base, max_number_size - i)) % base == prev_digit; ++j) {
                    int digit = int(arr[j] / pow(base, max_number_size - i - 1)) % base;
                    temp[digit].push_back(arr[j]);
                }

                for (auto &vec : temp) {
                    for (int number : vec) {
                        arr[k] = number;
                        k++;
                    }

                    vec.clear();
                }
                
                j--;
            }
        }

        if (i == 0) {
            int l = 0;
            for (auto &vec: temp) {
                for (int number: vec) {
                    arr[l] = number;
                    l++;
                }

                vec.clear();
            }
        }
    }
}

int main(){
    std::cout << "\nBefore sort: ";
    int arr[] = {932, 311, 457, 163, 330, 118, 953, 949, 381, 166};
    for (int a : arr) {
        std::cout << a << ' ';
    }

    std::cout << "\nAfter sort: ";
    radix_msd(arr, std::size(arr));
    for (int a : arr) {
        std::cout << a << ' ';
    }
}