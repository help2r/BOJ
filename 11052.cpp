#include <iostream>
#include <algorithm>
using namespace std;

int arr[1001], dp[1001];
int n;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
		for (int j = 0; j < i; j++)
			dp[i] = max(dp[i], dp[j] + arr[i - j]);

	cout << dp[n];
	return 0;
}