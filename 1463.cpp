#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;

int n;
int dp[1000001];
int main()
{
	int temp;
	cin >> n;

	dp[1] = 0;
	for (int i = 2; i <= n; i++)
	{

		if (i - 1 >= 1)
		{
			dp[i] = dp[i - 1] + 1;
		}

		if (i % 2 == 0)
		{
			temp = dp[i / 2] + 1;
			dp[i] = min(dp[i], temp);
		}

		if (i % 3 == 0)
		{
			temp = dp[i / 3] + 1;
			dp[i] = min(dp[i], temp);
		}

	}

	cout << dp[n];
}