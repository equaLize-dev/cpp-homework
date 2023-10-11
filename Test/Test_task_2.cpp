//#include <iostream>
//
//int main(){
//    unsigned int M;
//    std::cout << "Print M value: ";
//    std::cin >> M;
//    if (M >= 3){
//        if (M % 3 == 4 || M % 3 == 0)
//            std::cout << "3-blade spinners: " << M / 3 << "\n4-blade spinners: " << (M % 3) / 4 ;
//        else if (M % 4 == 3 || M % 4 == 0)
//            std::cout << "3-blade spinners: " << (M % 4) / 3 << "\n4-blade spinners: " << M / 4;
//        else{
//            if (M % 7 == 0) std::cout << "3-blade spinners: " << M / 7 << "\n4-blade spinners: " << M / 7;
//            else if (M % 7 == 3) std::cout << "3-blade spinners: " << M / 7 + 1  << "\n4-blade spinners: " << M / 7;
//            else if (M % 7 == 4) std::cout << "3-blade spinners: " << M / 7 << "\n4-blade spinners: " << M / 7 + 1;
//            else std::cout << "Impossible to calculate final result.";
//        }
//    }
//
//    else std::cout << "Impossible to calculate final result.";
//}
//
