#include <iostream> 
#include <cmath> 
int main() {
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
    
    return 0;
    }
}