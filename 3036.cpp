#include <iostream>
using namespace std;

int n,arr[101];
int gcd(int a, int b);
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int j = 2; j <= n; j++)
		{
			int GCD=gcd(arr[1], arr[j]);
			printf("%d/%d\n", arr[1] / GCD, arr[j] / GCD);
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