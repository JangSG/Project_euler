#include <iostream>

int algorithm(int num);

int main()
{
	int num = 100;
	int result = algorithm(num);
	std::cout << result << std::endl;
}

//합의 제곱과 제곱의 합의 차를 계산하는 알고리즘
int algorithm(int num)
{
	int sumFirst=0, doubleFirst=0,buf,result;

	// 제곱의 합을 구함
	for (int i = 1; i <= num;i++)
	{
		buf = i * i;
		doubleFirst += buf;
	}

	// 합의 제곱을 구함
	for (int i = 1; i <= num; i++)
	{
		sumFirst += i;
	}
	sumFirst = sumFirst * sumFirst;
	
	// 결과가 양수로 나오게 조정(절댓값 함수를 사용해도 됨)
	if (sumFirst > doubleFirst)
		result = sumFirst - doubleFirst;
	else
		result = doubleFirst - sumFirst;

	return result;

}