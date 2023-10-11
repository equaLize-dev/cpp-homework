#include <cmath>
#include <iostream>
#include <string>
#include <vector>

int main()
{
   int size = 100;
   int height = 21;

   // Drawing a graph
   std::vector<std::string> sinGraph(height, std::string(size, ' '));
   sinGraph[height / 2] = std::string(size, '-');

   // Calculating the values of sin function at each point
   for (int i = 0; i < size; i++) {
       sinGraph[(round(10 * sin(i / 4.5) + 10))][i] = '*';
   }

   // Drawing graph of sin function
   for (auto s : sinGraph) {
       std::cout << s << '\n';
   }
}