#include <iostream>
using namespace std;

int n,arr[3];
int gcd(int a, int b);
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];
	if (n == 2)
	{
		int GCD1=gcd(arr[0], arr[1]);
		for (int i = 1; i <=GCD1; i++)
			if (GCD1%i == 0)
				printf("%d\n",i);
	}
	else
	{
		int GCD1 = gcd(arr[0], arr[1]);
		int GCD2 = gcd(arr[1], arr[2]);
		GCD1 = gcd(GCD1, GCD2);
		for (int i = 1; i <= GCD1; i++)
			if (GCD1%i == 0)
				printf("%d\n",i);

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