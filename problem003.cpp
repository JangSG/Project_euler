#include <iostream>
#include <cmath>

void printSosu(long long param);
bool isSosu(long long param);


int main()
{
	printSosu(600851475143LL);
	return 0;
}

// 소인수를 출력하는 함수
void printSosu(long long param)
{
	for (long long i = 2; i <= param; i++)
	{
		// 나머지가 0인 결과를 필터링
		if (param % i == 0&&isSosu(i))
		{
			
			std::cout << i<<std::endl;
			
		}
	}
}

// 소수를 판별하는 함수
bool isSosu(long long param)
{
	if (param < 2)return false;
	for (long long i = 2; i <= sqrt(param); i++)
	{
		if (param % i == 0)
			return false; // 소수가 아님
	}
	return true; // 소수임
}