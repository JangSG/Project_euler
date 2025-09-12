#include <stdio.h>

int main() {
	int sum = 0;
	
	int i;
	for ( i = 0; i < 1000; i++) {
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d 이하의 수에서 3 또는 5의 배수만을 더한 결과는 %d입니다.\n", i, sum);
}

