#include <iostream>
#include <iomanip>

int main()
{
   for (int i = 0; i < 6; ++i) {
           
       if (0 == i % 2) {
           for (int j = 0; j < 8; j++)
               std::cout << " * ";

           std::cout.width(60);
           std::cout << std::setw(60) << std::setfill('/') << '\n';
       }
           
       else {
           for (int j = 0; j < 8; j++)
               std::cout << " * ";

           std::cout.width(60);
           std::cout << std::setw(60) << std::setfill('\\') << '\n';
       }
   }

   for (int i = 0; i < 7; i++) {
       if (0 == i % 2)
           std::cout << std::setw(84) << std::setfill('\\') << '\n';
       else
           std::cout << std::setw(84) << std::setfill('/') << '\n';
   }

   return 0;
}