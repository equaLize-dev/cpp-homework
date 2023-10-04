//#include <iostream>
//
///// <summary>
///// Checks if provided symbol is related to Roman numeric system
///// </summary>
///// <param name="letter">symbol</param>
///// <returns>true if symbol is in Roman NS; otherwise false</returns>
//bool isCorrectLetter(const char &letter) {
//    char mySymbols[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
//    for (char symbol : mySymbols)
//        if (letter == symbol) 
//            return true;
//
//    return false;
//}
// 
///// <summary>
///// Checks if provided pair of symbols has a correct notation in Roman numeric system.
///// It takes a pair of adjacent symbols and checks if their sequential notation is possible.
///// </summary>
///// <param name="previous">first symbol in pair</param>
///// <param name="next">second symbol in pair</param>
///// <param name="recurrence">variable for the number of consecutive characters (for example: in number XXX max recurrence == 3)</param>
///// <returns>true if provided pair has correct notation; otherwise false</returns>
//bool isCorrectSequence(const char &previous, const char &next, int &recurrence) {
//    if (next == previous && (previous == 'L' || previous == 'D' || previous == 'V')) return false;
//    if (recurrence == 3 && (next == 'X' || next == 'C' || next == 'M' || next == 'I')) return false;
//    if ((next == 'X' && previous == 'V') || (next == 'C' && previous == 'L') || (next == 'M' && previous == 'D')) return false;
// 
//    return true;
//}
// 
//
///// <summary>
///// Returns the decimal value of Roman character
///// </summary>
///// <param name="number">Roman character</param>
///// <returns>decimal value of Roman character</returns>
//int getArabNumber(const char &number){
//    switch(number){
//    case 'I':
//        return 1;
//    case 'V':
//        return 5;
//    case 'X':
//        return 10;
//    case 'L':
//        return 50;
//    case 'C':
//        return 100;
//    case 'D':
//        return 500;
//    case 'M':
//        return 1000;
//    }
//
//    return 0;
//}
// 
///// <summary>
///// 
///// </summary>
///// <param name="array"></param>
///// <param name="count"></param>
///// <returns></returns>
//int calculation(const char array[], const int &count){
//    int result = 0;
//    int prev = 0, next;
//
//    for(int i = count; i >= 0; --i){
//        next = getArabNumber(array[i]);
//        
//        if(prev > next)
//            result = (result - prev) + (prev - next);
//        
//        else result +=next;
//        prev = next;
// 
//    }
//
//    return result;
//}
// 
//int main() {
//    const int size = 256;
//    char s[size], next, previous;
//    int i, recurrence = 0;
//    bool isCorrect = true;
// 
//    std::cout << "Print roman number: ";
//    for (i = 0; (next = std::cin.get()) != '\n'; ++i) {
//        if (i == 0) {
//            s[i] = next;
//            previous = next;
//        } 
//        
//        else {
//            if (previous == next)
//                recurrence++;
//            else
//                recurrence = 0;
//            
//            if (isCorrectLetter(next) && isCorrectSequence(previous, next, recurrence)) {
//                s[i] = next;
//                previous = next;
//            } 
//            
//            else {
//                isCorrect = false;
//                break;
//            }
//        }
//    }
//    
//    if (!isCorrect || (s[i - 3] == 'I' && s[i - 2] != 'I'))
//        std::cout << "Provided number is not correct.";
//    
//    else { std::cout << calculation(s, i-1) << "\n"; }
// 
//    return 0;
//}