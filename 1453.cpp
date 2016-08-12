#include <iostream>
#include <algorithm>
using namespace std;

int arr[101], cnt, n, k;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> k;
		arr[k]++;
	}
	for (int i = 1; i <= 100; ++i)
		if (arr[i] > 1)
			cnt += arr[i] - 1;
	cout << cnt;
}