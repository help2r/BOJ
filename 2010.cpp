#include <iostream>
#include <algorithm>
using namespace std;

int n, k, sum;
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		sum += k;
	}
	cout << sum - (n - 1);
}