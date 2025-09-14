#include <iostream>
#include <vector>

// 소수를 판별하고 합하는 함수(에라토스테네스의 체 사용)
long long sumPrime(int num)
{
	// 소수 여부를 저장할 vector자료형 생성
	std::vector<bool>isPrime(num + 1, true);

	// 0과 1은 소수가 아니니 제외
	isPrime[0] = isPrime[1] = false;

	//소수 판별 반복문
	// num의 제곱근까지만 확인
	for (int i = 2; i * i <= num; i++)
	{
		// 만약 소수이면
		if (isPrime[i])
		{
			// 해당 수의 배수를 제외시킴
			// i* i부터 시작하는 이유는 그 이전의 배수들은 이미 다른 소수들에 의해 지워졌기 때문
			for (int j = i * i; j <= num; j += i)
				isPrime[j] = false;
		}
	}

	// 총합을 저장할 변수
	long long sum = 0;

	// 소수를 모두 더함
	for (int i = 2; i <= num; i++)
	{
		if (isPrime[i])
			sum += i;
	}

	return sum;
}

int main()
{
	int num = 2000000;
	long long result = sumPrime(num);

	std::cout << result << std::endl;
}