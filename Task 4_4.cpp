//#include <iostream>
//#include <iomanip>
//
//int main()
//{
//    for (int i = 0; i < 13; ++i) {
//        if (i < 6) {
//            std::cout << '\n';
//            
//            if (0 == i % 2) {
//                for (int j = 0; j < 8; j++)
//                    std::cout << " * ";
//
//                std::cout.width(60);
//                std::cout << std::setw(60) << std::setfill('/');
//            }
//            
//            else {
//                for (int j = 0; j < 8; j++)
//                    std::cout << " * ";
//            }
//        }
//    }
//
//    for (int i = 0; i < 9; i++) {
//        if (0 == i % 2)
//            std::cout << std::setw(84) << std::setfill(' ') << '\n';
//        else
//            std::cout << std::setw(84) << std::setfill('/') << '\n';
//    }
//
//    return 0;
//}