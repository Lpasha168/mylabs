#include <iostream> 
#include <cmath> 
int main() {
    */
int day;
    cin >> day;

    if (day == 1)
        cout << "Понедельник";
    else if (day == 2)
        cout << "Вторник";
    else if (day == 3)
        cout << "Среда";
    else if (day == 4)
        cout << "Четверг";
    else if (day == 5)
        cout << "Пятница";
    else if (day == 6)
        cout << "Суббота";
    else if (day == 7)
        cout << "Воскресенье";
    else
        cout << "Неверный номер дня";


    switch (day) {
        case 1: cout << "Понедельник"; break;
        case 2: cout << "Вторник"; break;
        case 3: cout << "Среда"; break;
        case 4: cout << "Четверг"; break;
        case 5: cout << "Пятница"; break;
        case 6: cout << "Суббота"; break;
        case 7: cout << "Воскресенье"; break;
        default: cout << "Неверный номер дня"; break;
    }

/*
    short n;
    std::cin >> n;
    if ((n >= 2) && (n <= 1000)){
        short k;
        for (int d = 1; d <= n; ++d) {
            int sum = 0;
            for(int x = 1; x <= d / 2; ++x) {
               if (d % x == 0){
                    sum += x;
               }
            }
            if (sum == d && sum != 0) {
                std::cout << d << " - Perfect Number" << std::endl;
                k += 1;
            }
        }
        if (k == 0) {
            std::cout << "No perfect numbers found" << std::endl;
        }   
    }else {
        std::cout << "Invalid input" << std::endl;
    }
    return 0
}
