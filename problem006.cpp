#include <iostream>

int algorithm(int num);

int main()
{
	int num = 100;
	int result = algorithm(num);
	std::cout << result << std::endl;
}

//���� ������ ������ ���� ���� ����ϴ� �˰���
int algorithm(int num)
{
	int sumFirst=0, doubleFirst=0,buf,result;

	// ������ ���� ����
	for (int i = 1; i <= num;i++)
	{
		buf = i * i;
		doubleFirst += buf;
	}

	// ���� ������ ����
	for (int i = 1; i <= num; i++)
	{
		sumFirst += i;
	}
	sumFirst = sumFirst * sumFirst;
	
	// ����� ����� ������ ����(���� �Լ��� ����ص� ��)
	if (sumFirst > doubleFirst)
		result = sumFirst - doubleFirst;
	else
		result = doubleFirst - sumFirst;

	return result;

}