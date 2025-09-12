#include <iostream>

inline bool isPalindrome(int x) {
    int orig = x, rev = 0;
    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    return orig == rev;
}

int main() {
    int best = 0;
    int bestA = 0, bestB = 0;

    for (int a = 999; a >= 100; --a) {
        // a가 11의 배수면 b는 전체 범위, 아니면 b는 11의 배수만
        int bStart = (a % 11 == 0) ? 999 : 990; 
        int step = (a % 11 == 0) ? 1 : 11;

        for (int b = bStart; b >= 100; b -= step) {
            int prod = a * b;

            // 더 진행해도 무의미
            if (prod <= best) break;

            if (isPalindrome(prod)) {
                best = prod;
                bestA = a; bestB = b;
            }
        }
    }

    std::cout << "최대 대칭수 = " << best << " = " << bestA << " * " << bestB << std::endl;
    return 0;
}
