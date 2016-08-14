#include <iostream>
using namespace std;

int n, m, total;
int arr[100001];
int sum[100001];
int main()
{
	int a, b;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &arr[i]);
		sum[i] = sum[i - 1] + arr[i];
	}
	while (m--)
	{
		scanf("%d %d", &a, &b);
		total = sum[b] - sum[a - 1];
		printf("%d\n", total);
	}
	return 0;
}