//#include <iostream>
//#include <format>
//
//int main() {
//    int all_places[9][6]{};
//    int beginning = 1, end = 54;
//
//    for (int* i : all_places) {
//        for (int j = 0; j < 6; ++j) {
//            if (j < 4) i[j] = beginning++;
//            else i[j] = end--;
//        }
//    }
//
//    int N, place, result = 0;
//    std::cout << "Print N value: ";
//    std::cin >> N;
//    int* free_places = new(std::nothrow) int[N]{} ;
//
//    for (int i = 0; i < N; ++i) {
//        std::cout << std::format("Print {} place number: ", i + 1);
//        std::cin >> place;
//        free_places[i] = place;
//    }
//
//    for (int* coupe : all_places) {
//        bool fg_coupe = true;
//        for (int i = 0; i < 6; ++i) {
//            bool fg_place = false;
//            for (int j = 0; j < N; ++j) {
//                if (coupe[i] == free_places[j]) {
//                    fg_place = true;
//                    break;
//                }
//            }
//
//            if (!fg_place) {
//                fg_coupe = false;
//                break;
//            }
//        }
//
//        if (fg_coupe)
//            result++;
//    }
//
//    delete[] free_places;
//    free_places = nullptr;
//
//    std::cout << "Result: " << result;
//}
