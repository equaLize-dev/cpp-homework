//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <limits>
//
//int main(){
//    // ѕодозреваю, что в этом задании нельз€ использовать sort(), поэтому € реализовал второй метод сортировки через сравнение кодов ASCII
//    std::string str = "rejgoawjhgouawhgAWRHBAWGH";
//    std::sort(str.begin(), str.end());
//    std::cout << "Using sort(): " << str << "\n";
//    
//    #pragma region ASCII Sort
//
//    str = "rejgoawjhgouawhgAWRHBAWGH";
//
//    for (int i = 0; i < str.size() - 1; i++) {
//        for (int j = i; j < str.size() - 1; j++) {
//            if (str[i] > str[j + 1]) {
//                std::swap(str[i], str[j + 1]);
//            }
//        }
//    }
//
//    std::cout << "Using ACSII: " << str << "\n";
//
//    #pragma endregion
//
//    return 0;
//}