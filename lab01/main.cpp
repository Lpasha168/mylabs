#include <iostream> 
#include <limits>

int main() {
    std::cout << "Введите цифру " << std::endl;
    int x;
    std::cin >> x;
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
    
    std::cout << "Введите десятичную дробь " << std::endl;
    float y;
    std::cin >> y;
    std::cout << "Тип: float" << std::endl;
    std::cout << "Размер: (байт) " << sizeof(float) << std::endl;
    std::cout << "Максимум: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "Минимум: " << std::numeric_limits<float>::min() << std::endl;\
    std::cout << "Для double: " << std::endl;
    std::cout << "Размер: (байт) " << sizeof(double) << std::endl;
    std::cout << "Максимум: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "Минимум: " << std::numeric_limits<double>::min() << std::endl;
    return 0;
}
