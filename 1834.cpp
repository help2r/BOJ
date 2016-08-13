#include <iostream>
using namespace std;

long long n, cnt, sum;
int main()
{
	cin >> n;

	for (long long i = 1; i < n; i++)
		sum += (n*i) + i;

	cout << sum;

}