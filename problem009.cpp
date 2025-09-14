#include <iostream>
#include <cmath>

// 3 변의 합이 특정 수를 만족하는 직각삼각형을 찾는 함수
void findRectangle(int num)
{
	// 세 변을 조건에 맞추어 루프시킴
	for (int c = 2;; c++)
	{
		for (int b = 1; b < c; b++)
		{
			for (int a = 0; a < b; a++)
			{
				// 피타고라스 정의에 만족하고, 3변의 합이 특정 숫자일 때
				if (a * a + b * b == c * c&&a+b+c==num)
				{
					// 구하고자 하는 값을 출력
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