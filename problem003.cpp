#include <iostream>
#include <cmath>

void printSosu(long long param);
bool isSosu(long long param);


int main()
{
	printSosu(600851475143LL);
	return 0;
}

// ���μ��� ����ϴ� �Լ�
void printSosu(long long param)
{
	for (long long i = 2; i <= param; i++)
	{
		// �������� 0�� ����� ���͸�
		if (param % i == 0&&isSosu(i))
		{
			
			std::cout << i<<std::endl;
			
		}
	}
}

// �Ҽ��� �Ǻ��ϴ� �Լ�
bool isSosu(long long param)
{
	if (param < 2)return false;
	for (long long i = 2; i <= sqrt(param); i++)
	{
		if (param % i == 0)
			return false; // �Ҽ��� �ƴ�
	}
	return true; // �Ҽ���
}