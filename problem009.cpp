#include <iostream>
#include <cmath>

// 3 ���� ���� Ư�� ���� �����ϴ� �����ﰢ���� ã�� �Լ�
void findRectangle(int num)
{
	// �� ���� ���ǿ� ���߾� ������Ŵ
	for (int c = 2;; c++)
	{
		for (int b = 1; b < c; b++)
		{
			for (int a = 0; a < b; a++)
			{
				// ��Ÿ��� ���ǿ� �����ϰ�, 3���� ���� Ư�� ������ ��
				if (a * a + b * b == c * c&&a+b+c==num)
				{
					// ���ϰ��� �ϴ� ���� ���
					std::cout << a * b * c << std::endl;
					return;
				}
			}
		}
	}
}

int main()
{
	int num = 1000;
	findRectangle(num);

	return 0;
}