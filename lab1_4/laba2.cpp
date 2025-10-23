#include <iostream> 
#include <iomanip> 
#include <cmath> 
int main() {
    std::cout << "Арифметические действия целые числа" << std::endl;
    int x = 8;
    int y = 5;
    std::cout << "Сложение: " << x + y << std::endl;
    std::cout << "Умножение: " << x * y << std::endl;
    std::cout << "Деление: " << x / y << std::endl;
    std::cout << "Остаток от деления: " << x % y << std::endl;
    std::cout << "Арифметические действия float(2.0) и int(5)" << std::endl;
    int a = 5;
    float b = 2.0;
    std::cout << "Умножение: " << a * b << std::endl;
    std::cout << "Деление: " << a / b << std::endl;
    std::cout << "Деление: " << b / a << std::endl;
    
    float z = b * (x+y);
    float g = b * x+y;
    std::cout << "С скобками: b * (x+y) = " << z << std::endl;
    std::cout << "Без скобок: b * x + y = " << g << std::endl;
    
    long  a1 = 1000000000, b1 = 1;
    long kv1 = pow(a1+b1, 2);
    long kv3 = a1*a1 + 2*a1*b1 + b1*b1;
    std::cout << kv1 << std::endl;
    std::cout << kv3 << std::endl;
    
    double a2 = 0.1;
    double b2 = 0.2;
    double c2 = a2 + b2;

    std::cout << std::setprecision(17); 
    std::cout << "0.1 + 0.2 = " << c2 << std::endl;
    
    float j, k, l;
    int n;
    std::cout << "Введите три числа:" << std::endl;
    std::cin >> j >> k >> l;
    std::cout << "Введите точность которая нужна:" << std::endl;
    std::cin >> n;
    double drli = (j + k + l) / 3.0;
    std::cout << std::setprecision(n);
    std::cout << drli << std::endl;
    
    
    double q, w, o;
    std::cin >> q >> w >> o;
    double dg = sqrt(q*q + w*w + o*o);
    std::cout << dg << std::endl;
    
    return 0;
}
