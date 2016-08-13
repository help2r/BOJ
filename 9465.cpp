#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int arr[2][100001];
int dp[2][100001];
int main()
{
	int n,k;
	cin >> n;

	while (n--)
	{
		memset(arr, 0, (2, 100001));
		memset(dp, 0, (2, 100001));
		scanf("%d", &k);
		
		for (int i = 0; i < 2; i++)
			for (int j = 0; j < k; j++)
				scanf("%d", &arr[i][j]);

		dp[0][0] = arr[0][0];
		dp[1][0] = arr[1][0];
		dp[0][1] = dp[1][0] + arr[0][1];
		dp[1][1] = dp[0][0] + arr[1][1];
		for (int i = 2;i < k; i++)
		{
				dp[0][i] = max(dp[1][i - 2] + arr[0][i], dp[1][i - 1] + arr[0][i]);
				dp[1][i] = max(dp[0][i - 2] + arr[1][i], dp[0][i - 1] + arr[1][i]);
		}

		if (dp[0][k - 1]>dp[1][k - 1])
			printf("%d\n", dp[0][k - 1]);	
		else
			printf("%d\n", dp[1][k - 1]);	
	}
	return 0;
}