#include <iostream>

// 특정 순서의 
int getSosu(int target)
{
	int count = 0;
	
	for (int i = 2;; i++)
	{
		bool isSosu = true;
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
				isSosu = false;
		}
		if (isSosu)
			count++;
		if (count == target)
			return i;
	}
}

int main()
{
	int target = 10001;
	int result = getSosu(target);
	std::cout << result << std::endl;
}

