#include <stdio.h>

int main() {
	int sum = 0;
	
	int i;
	for ( i = 0; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d ������ ������ 3 �Ǵ� 5�� ������� ���� ����� %d�Դϴ�.\n", i, sum);
}

