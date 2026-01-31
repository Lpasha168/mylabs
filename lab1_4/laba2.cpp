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
using namespace std;

// Состояние 10 дверей
bool door1 = false;
bool door2 = false;
bool door3 = false;
bool door4 = false;
bool door5 = false;
bool door6 = false;
bool door7 = false;
bool door8 = false;
bool door9 = false;
bool door10 = false;

// Функции
void openDoor(bool &door) {
    door = true;
}

void closeDoor(bool &door) {
    door = false;
}

void printDoor(bool door, int number) {
    cout << "Дверь " << number << ": "
         << (door ? "открыта" : "закрыта") << endl;
}

int main() {
    openDoor(door1);
    openDoor(door5);
    openDoor(door9);

    printDoor(door1, 1);
    printDoor(door2, 2);
    printDoor(door3, 3);
    printDoor(door4, 4);
    printDoor(door5, 5);
    printDoor(door6, 6);
    printDoor(door7, 7);
    printDoor(door8, 8);
    printDoor(door9, 9);
    printDoor(door10, 10);

    return 0;
}

#include <iostream>
using namespace std;

class Test {
public:
    Test() {
        cout << "Конструктор\n";
    }

    ~Test() {
        cout << "Деструктор\n";
    }
};

int main() {
    cout << "Начало main\n";

    {
        Test obj;
        cout << "Внутри блока\n";
    } // ← здесь объект выходит из области видимости

    cout << "Конец main\n";
    return 0;
}
class MyClass {
public:
    int x;
    MyClass() : MyClass(10) {} // Делегирующий конструктор
    MyClass(int val) { x = val; } // Целевой конструктор
};
