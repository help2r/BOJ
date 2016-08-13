#include <iostream>
#include <algorithm>
using namespace std;

int arr[10002],dp[10002];
int n;
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	dp[1] = arr[1];
	dp[2] = dp[1] + arr[2];
	for (int i = 3; i <= n; i++)
	{
		dp[i] = max({dp[i-2]+arr[i], dp[i-1], arr[i]+arr[i-1]+dp[i-3]});
	}
	cout << dp[n];
}