#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[1003][4];
int dp[1003][4];
int main()
{
	cin >> n;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j < 4; j++)
			cin >> arr[i][j];

	dp[1][1] = arr[1][1];
	dp[1][2] = arr[1][2];
	dp[1][3] = arr[1][3];

	for (int i = 2; i <= n; i++)
	{
		if (dp[i - 1][2]>dp[i - 1][3])
			dp[i][1] = dp[i - 1][3] + arr[i][1];
		else
			dp[i][1] = dp[i - 1][2] + arr[i][1];

		if (dp[i - 1][1] > dp[i - 1][3])
			dp[i][2] = dp[i - 1][3] + arr[i][2];
		else
			dp[i][2] = dp[i - 1][1] + arr[i][2];

		if (dp[i - 1][1] > dp[i - 1][2])
			dp[i][3] = dp[i - 1][2] + arr[i][3];
		else
			dp[i][3] = dp[i - 1][1] + arr[i][3];
	}

	cout << min({ dp[n][1],dp[n][2],dp[n][3] }) << endl;

}