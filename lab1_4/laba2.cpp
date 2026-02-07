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
#include <iostream>
#include "Date.h"

int main() {
    try {
        int d, m, y;
        std::cout << "Enter date (day month year): ";
        std::cin >> d >> m >> y;

        Date date(d, m, y);

        std::cout << "Date: " << date.toString() << "\n";
        std::cout << "Leap year? " << (date.isLeapYear() ? "Yes" : "No") << "\n";
        std::cout << "Day of week: " << date.dayOfWeek() << "\n";

        Date another(1, 1, 2000);
        std::cout << "Days between " << date.toString() << " and 01/01/2000: " 
                  << date.daysBetween(another) << "\n";

        date.addDays(10);
        std::cout << "After adding 10 days: " << date.toString() << "\n";

        date.subtractDays(5);
        std::cout << "After subtracting 5 days: " << date.toString() << "\n";

        std::cout << "Enter birth date (day month year): ";
        int bd, bm, by;
        std::cin >> bd >> bm >> by;
        Date birth(bd, bm, by);
        Date today(7, 2, 2026);
        int age = today.daysBetween(birth) / 365;
        std::cout << "Age: " << age << " years\n";
    }
    catch (std::exception& e) {
        std::cerr << e.what() << "\n";
    }
    return 0;
}

