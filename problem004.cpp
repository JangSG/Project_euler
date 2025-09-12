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
        // a�� 11�� ����� b�� ��ü ����, �ƴϸ� b�� 11�� �����
        int bStart = (a % 11 == 0) ? 999 : 990; 
        int step = (a % 11 == 0) ? 1 : 11;

        for (int b = bStart; b >= 100; b -= step) {
            int prod = a * b;

            // �� �����ص� ���ǹ�
            if (prod <= best) break;

            if (isPalindrome(prod)) {
                best = prod;
                bestA = a; bestB = b;
            }
        }
    }

    std::cout << "�ִ� ��Ī�� = " << best << " = " << bestA << " * " << bestB << std::endl;
    return 0;
}
