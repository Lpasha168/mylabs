#include <iostream> 
#include <limits>

int main() {
    
    std::cout << "Тип: int" << std::endl;
    std::cout << "Размер: (байт) " << sizeof(int) << std::endl;
    std::cout << "Максимум: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "Минимум: " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Для long int:" << std::endl;
    std::cout << "Размер: (байт) " << sizeof(long int) << std::endl;
    std::cout << "Максимум: " << std::numeric_limits<long int>::max() << std::endl;
    std::cout << "Минимум: " << std::numeric_limits<long int>::min() << std::endl;
    std::cout << "Для unsigned int:" << std::endl;
    std::cout << "Размер: (байт) " << sizeof(unsigned int) << std::endl;
    std::cout << "Максимум: " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "Минимум: " << std::numeric_limits<unsigned int>::min() << std::endl;
    std::cout <<"------------------" << std::endl;
    
    std::cout << "Тип: float" << std::endl;
    std::cout << "Размер: (байт) " << sizeof(float) << std::endl;
    std::cout << "Максимум: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Минимум: " << std::numeric_limits<float>::min() << std::endl;\
    std::cout << "Для double: " << std::endl;
    std::cout << "Размер: (байт) " << sizeof(double) << std::endl;
    std::cout << "Максимум: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Минимум: " << std::numeric_limits<double>::min() << std::endl;
 
    std::cout << "------------------" << std::endl;
    std::cout << "Арифметические действия между целами числами ( 8 и 5 )" << std::endl;
    int x = 8;
    int y = 5;
    std::cout << "Сложение: " << x + y << std::endl;
    std::cout << "Умножение: " << x * y << std::endl;
    std::cout << "Деление: " << x / y << std::endl;
    std::cout << "Остаток от деления: " << x % y << std::endl;
    std::cout << "Арифметические действия между float(2.0) и int(5)" << std::endl;
    int a = 5;
    float b = 2.0;
    std::cout << "Деление: " << a / b << std::endl;
    std::cout << "Деление: " << b / a << std::endl;
    return 0;
    
}
