#include <iostream>
using namespace std;

int gcd(int n1, int n2);
int a, b, c, d, GCD;
int main()
{
	int i = 1;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	GCD = gcd(b, d);
	int k = (b / GCD) *(d / GCD)*GCD;
	int q = a*(k / b) + c*(k / d);
	GCD = gcd(k, q);

	if (GCD == 1)
		cout << q << " " << k;
	else
		cout << q / GCD << " " << k / GCD;
}
int gcd(int n1, int n2)
{
	if (n1 < n2)
		return gcd(n2, n1);
	if (n2 == 0)
		return n1;
	return gcd(n2, n1%n2);
}