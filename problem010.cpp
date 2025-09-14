#include <iostream>
#include <vector>

// �Ҽ��� �Ǻ��ϰ� ���ϴ� �Լ�(�����佺�׳׽��� ü ���)
long long sumPrime(int num)
{
	// �Ҽ� ���θ� ������ vector�ڷ��� ����
	std::vector<bool>isPrime(num + 1, true);

	// 0�� 1�� �Ҽ��� �ƴϴ� ����
	isPrime[0] = isPrime[1] = false;

	//�Ҽ� �Ǻ� �ݺ���
	// num�� �����ٱ����� Ȯ��
	for (int i = 2; i * i <= num; i++)
	{
		// ���� �Ҽ��̸�
		if (isPrime[i])
		{
			// �ش� ���� ����� ���ܽ�Ŵ
			// i* i���� �����ϴ� ������ �� ������ ������� �̹� �ٸ� �Ҽ��鿡 ���� �������� ����
			for (int j = i * i; j <= num; j += i)
				isPrime[j] = false;
		}
	}

	// ������ ������ ����
	long long sum = 0;

	// �Ҽ��� ��� ����
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