#include<iostream>
using namespace std;
typedef long long ll;
ll extend_gcd(ll a, ll b, int& x, int& y)
{
	if (b == 0)
	{
		x = 1;
		y = 0;
		return a;
	}
	int r = extend_gcd(b, a % b, x, y);
	int t = x;
	x = y;
	y = t - a / b * y;
	return r;
}
int main()
{
	int n, m, s, d, k1, k2, ans;
	cin >> n >> m;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int t;
		cin >> t;
		sum += t;
	}
	sum %= m;
	int g1 = extend_gcd(n, n * (n + 1) / 2, s, d);
	int g2 = extend_gcd(g1, m, k2, k1);
	ans = sum % g2;
	cout << ans << endl;
	k2 = (k2 * ((ans - sum) / g2)%m) % m;
	s = (s%m * k2%m+m ) % m;
	d = (d%m * k2%m+m ) % m;
	cout << s << ' ' << d << endl;
}

