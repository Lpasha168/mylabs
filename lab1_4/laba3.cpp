#include <iostream> 

int main() {
    //   A  B  И  ИЛИ XOR
    //   0  0  0   0   0
    //   1  0  0   1   1 
    //   0  1  0   1   1
    //   1  1  1   1   0
    int x = 5;
    std::cout << (x >> 1) << std::endl;
    std::cout << (x << 1) << std::endl;
    // установка бита
    int mask1 = 1 << 2; // 0000 0100 
    int a = 11;         // 0000 1011 
    a |= mask1;         // 0000 1111 = 15
    // сброс бита
    int mask2 = 1 << 3;  // 0000 1000  
    int b = 15;          // 0000 1111 
    b &= ~mask2;         // 0000 0111 = 7
    
    int r;
    int i;
    std::cout << "Установите число (0<x<10^9)" << std::endl;
    std::cin >> r;
    std::cout << "Установите бит который хотите обратить в 0" << std::endl;
    std::cin >> i;
    std::cout << (r & ~(1 << (i-1)));
    return 0;
}