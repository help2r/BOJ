#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[502][502];
int dp[502][502];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= i; ++j)
			cin >> arr[i][j];

	dp[1][1] = arr[1][1];

	for (int i = 2; i <= n; i++)
		for (int j = 1; j <= i; j++)
		{
			if (j == 1)
				dp[i][j] = dp[i - 1][j] + arr[i][j];
			else if (j == i)
				dp[i][j] = dp[i - 1][j - 1] + arr[i][j];
			else
				dp[i][j] = max(dp[i - 1][j] + arr[i][j], dp[i - 1][j - 1] + arr[i][j]);
		}

	int max = dp[n][1];
	for (int i = 2; i <= n; i++)
		if (max < dp[n][i])
			max = dp[n][i];

	cout << max;
}