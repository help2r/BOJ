#include <iostream>
#include <stdio.h>
using namespace std;

int gcd(int a, int b);
int n;
int main()
{
	int k, q;
	cin >> n;
	while (n--)
	{
		scanf("%d %d", &k, &q);
		int max = gcd(k, q);
		cout << (k / max)*(q / max)*max << endl;
	}
}
int gcd(int a, int b)
{
	if (a < b)
		return gcd(b, a);
	if (b == 0)
		return a;
	return gcd(b, a%b);
}