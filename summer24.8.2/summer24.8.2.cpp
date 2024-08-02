#include<iostream>
using namespace std;
//快速幂
long long quick_power(long long a, long long b, long long mod)
{
	if (a == 1 || b == 0) return 1;
	else return b % 2 == 1 ? a * (quick_power(a * a % mod, b / 2, mod)) % mod : quick_power(a * a % mod, b / 2, mod);
}

int main()
{
	long long a, b, mod;
	cin >> a >> b >> mod;
	cout << quick_power(a, b, mod);
}
