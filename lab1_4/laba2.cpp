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
git clone --recursive https://github.com/mrBelka/qt_sample_app.git
https://git-scm.com/download/win
set GIT_CLONE_PROTECTION_ACTIVE=false

QTableWidget *table = new QTableWidget(this);
table->setRowCount(5);
table->setColumnCount(3);

table->setItem(0, 0, new QTableWidgetItem("Иван"));
table->setItem(0, 1, new QTableWidgetItem("25"));
table->setItem(0, 2, new QTableWidgetItem("Москва"));

int row = table->currentRow();
int column = table->currentColumn();

QTableWidgetItem *item = table->currentItem();

if (item)
    QString text = item->text();

#include <iostream>
#include <stdexcept>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
    void doWork() { std::cout << "Working...\n"; }
};

void processData(int value) {
    Resource* res1 = new Resource();
    Resource* res2 = new Resource();
    
    if (value < 0) {
        throw std::runtime_error("Negative value not allowed");
    }
    
    res1->doWork();
    res2->doWork();
    
    delete res1;
    delete res2;
}

int main() {
    try {
        processData(-5);
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << "Program continues...\n";
    return 0;
}
// исправленный 
#include <iostream>
#include <memory>
#include <stdexcept>

class Resource {
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource released\n"; }
    void doWork() { std::cout << "Working...\n"; }
};

void processData(int value) {
    auto res1 = std::make_unique<Resource>();
    auto res2 = std::make_unique<Resource>();
    
    if (value < 0) {
        throw std::runtime_error("Negative value not allowed");
    }
    
    res1->doWork();
    res2->doWork();
    
    // Автоматическое освобождение при выходе из функции
}

int main() {
    try {
        processData(-5);
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
    
    std::cout << "Program continues...\n";
    return 0;
}

// Задание 2 
#include <iostream>
#include <memory>

struct A;
struct B;

struct A {
    std::shared_ptr<B> b_ptr;  // A владеет B
    ~A() { std::cout << "A удалён\n"; }
};

struct B {
    std::shared_ptr<A> a_ptr;  // B владеет A - вот проблема!
    ~B() { std::cout << "B удалён\n"; }
};

int main() {
    std::cout << "Создаём объекты...\n";
    
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    
    // Создаём циклическую ссылку
    a->b_ptr = b;
    b->a_ptr = a;
    
    std::cout << "Счётчик ссылок A: " << a.use_count() << "\n";
    std::cout << "Счётчик ссылок B: " << b.use_count() << "\n";
    
    std::cout << "Выходим из main - объекты НЕ удалятся!\n";
    return 0;
}
// Решение 
#include <iostream>
#include <memory>

struct A;
struct B;

struct A {
    std::shared_ptr<B> b_ptr;  // A по-прежнему владеет B
    ~A() { std::cout << "A удалён\n"; }
};

struct B {
    std::weak_ptr<A> a_ptr;    // B просто наблюдает за A (weak_ptr)
    ~B() { std::cout << "B удалён\n"; }
};

int main() {
    std::cout << "Создаём объекты...\n";
    
    auto a = std::make_shared<A>();
    auto b = std::make_shared<B>();
    
    // Связываем объекты
    a->b_ptr = b;
    b->a_ptr = a;  // weak_ptr не увеличивает счётчик!
    
    std::cout << "Счётчик ссылок A: " << a.use_count() << "\n";  // Только 1!
    std::cout << "Счётчик ссылок B: " << b.use_count() << "\n";
    
    std::cout << "Выходим из main - объекты УДАЛЯТСЯ!\n";
    return 0;
}

//Задание 3 пример кода std::move
#include <iostream>
#include <memory>

struct Resource {
    int id;
    Resource(int i) : id(i) { 
        std::cout << "Resource " << id << " создан\n"; 
    }
    ~Resource() { 
        std::cout << "Resource " << id << " уничтожен\n"; 
    }
    void use() { 
        std::cout << "Использую Resource " << id << "\n"; 
    }
};

int main() {
    std::cout << "=== unique_ptr перемещение ===\n";
    
    // Создаём unique_ptr
    auto ptr1 = std::make_unique<Resource>(1);
    std::cout << "ptr1 указывает на Resource " << ptr1->id << "\n";
    
    // Перемещаем владение в ptr2
    auto ptr2 = std::move(ptr1);
    
    std::cout << "После move:\n";
    std::cout << "ptr1: " << (ptr1 ? "не пустой" : "пустой (nullptr)") << "\n";
    std::cout << "ptr2 указывает на Resource " << ptr2->id << "\n";
    
    // ptr2->use();  // Можно использовать ptr2
    // ptr1->use();  // ОШИБКА! ptr1 теперь nullptr
    
    std::cout << "Выход из области видимости\n";
    return 0;
}

// Задание 4
// Передача в функцию
#include <iostream>
#include <memory>

class Data {
public:
    int value;
    Data(int v) : value(v) { 
        std::cout << "Создан Data: " << value << "\n"; 
    }
    ~Data() { 
        std::cout << "Удалён Data: " << value << "\n"; 
    }
    void print() { 
        std::cout << "Значение: " << value << "\n"; 
    }
};

// Функция принимает unique_ptr и становится владельцем
void processData(std::unique_ptr<Data> ptr) {
    std::cout << "Функция processData получила данные: ";
    ptr->print();
    // ptr будет автоматически удалён при выходе из функции
}

int main() {
    std::cout << "=== ПЕРЕДАЧА В ФУНКЦИЮ ===\n";
    
    auto myData = std::make_unique<Data>(100);
    
    // Передаём владение в функцию
    processData(std::move(myData));  // <- ЗДЕСЬ НУЖЕН std::move
    
    // myData теперь пустой!
    if (!myData) {
        std::cout << "myData больше не владеет ресурсом\n";
    }
    
    return 0;
}
// Вернуть из функции
#include <iostream>
#include <memory>

class Data {
public:
    int value;
    Data(int v) : value(v) { 
        std::cout << "Создан Data: " << value << "\n"; 
    }
    ~Data() { 
        std::cout << "Удалён Data: " << value << "\n"; 
    }
    void print() { 
        std::cout << "Значение: " << value << "\n"; 
    }
};

// Функция создаёт и возвращает unique_ptr
std::unique_ptr<Data> createData(int val) {
    auto localPtr = std::make_unique<Data>(val);
    // Делаем что-то с данными...
    localPtr->value *= 2;
    
    return localPtr;  // <- ЗДЕСЬ std::move НЕ НУЖЕН
}

// Ещё один вариант создания
std::unique_ptr<Data> createDataDirect(int val) {
    return std::make_unique<Data>(val);  // move не нужен
}

int main() {
    std::cout << "=== ВОЗВРАТ ИЗ ФУНКЦИИ ===\n";
    
    // Получаем владение от функции
    auto myData = createData(50);
    std::cout << "Получены данные из createData: ";
    myData->print();
    
    auto myData2 = createDataDirect(30);
    std::cout << "Получены данные из createDataDirect: ";
    myData2->print();
    
    return 0;
}
// Задание 5
#include <iostream>
#include <memory>

struct Resource {
    int id;
    Resource(int i) : id(i) { 
        std::cout << "Ресурс " << id << " создан\n"; 
    }
    ~Resource() { 
        std::cout << "Ресурс " << id << " уничтожен (обычный деструктор)\n"; 
    }
};

int main() {
    std::cout << "=== Пример 2: Лямбда как удалитель ===\n";
    
    // Лямбда-удалитель
    auto customDeleter = [](Resource* r) {
        std::cout << ">>> Пользовательский удалитель для ресурса " << r->id << "\n";
        std::cout << ">>> Делаем доп. действия перед удалением\n";
        delete r;  // Всё равно вызываем delete
    };
    
    // Создаём unique_ptr с лямбдой
    std::unique_ptr<Resource, decltype(customDeleter)> ptr(new Resource(42), customDeleter);
    
    std::cout << "Работаем с ресурсом " << ptr->id << "\n";
    
    std::cout << "Выходим - будет вызван custom deleter\n";
    return 0;
}
