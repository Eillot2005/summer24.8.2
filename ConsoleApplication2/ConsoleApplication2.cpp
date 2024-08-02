//基于素因式分解的欧拉函数计算
#include <iostream>
using namespace std;
//欧拉函数
int sigma(int n)
{
	int ans = n;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			ans = ans / i * (i - 1);
			while (n % i == 0) n /= i;
		}
	}
	if (n > 1) ans = ans / n * (n - 1);
	return ans;
}

int main()
{
	int n;
	cin >> n;
	cout << sigma(n);
}