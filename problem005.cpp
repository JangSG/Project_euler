#include <iostream>

int allEquation(int num);

int main()
{
	int range = 20;
	int result=allEquation(range);
	std::cout << "1에서 " << range << "까지의 모든 수로 나누어지는 수는 " << result << "이다" << std::endl;

}

// 범위의 수까지 모두 나누어 떨어지는 수를 찾는 함수
int allEquation(int num)
{
	int result = 1;
	while (true)
	{
		bool find = true;
		for (int i = 1; i <= num; i++)
		{
			if (result % i != 0)
			{
				find = false;
				break;
			}
		}
		if (find)
			return result;
		result++;
	}
}