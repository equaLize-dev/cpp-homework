//#include <cmath>
//#include <iostream>
//#include <string>
//#include <vector>
//
//int main()
//{
//    int size = 100;
//    int height = 21;
//
//    std::vector<std::string> sinGraph(height, std::string(size, ' '));
//    sinGraph[height / 2] = std::string(size, '-');
//
//    for (int i = 0; i < size; i++) {
//        sinGraph[(round(10 * sin(i / 4.5) + 10))][i] = '*';
//    }
//
//    for (auto s : sinGraph) {
//        std::cout << s << '\n';
//    }
//}