#include <iostream>

int allEquation(int num);

int main()
{
	int range = 20;
	int result=allEquation(range);
	std::cout << "1���� " << range << "������ ��� ���� ���������� ���� " << result << "�̴�" << std::endl;

}

// ������ ������ ��� ������ �������� ���� ã�� �Լ�
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