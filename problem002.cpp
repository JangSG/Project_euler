#include <stdio.h>

int main()
{
	int before = 1, next = 2;
	int buf, sum = 0;

	while (next <= 4000000)
	{
		if (next % 2 == 0)
			sum += next;
		printf("%d\n", next);
		buf = next;
		next = next + before;
		before = buf;
	}

	printf("4000000������ �Ǻ���ġ �������� ¦������ ���� ���� %d �Դϴ�.\n", sum);
}