#include <iostream>
using namespace std;

int arr[301][301], n, m, cnt, sum;
int main()
{
	int x1, y1, x2, y2;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			scanf("%d", &arr[i][j]);

	cin >> cnt;
	while (cnt--)
	{
		sum = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i <= x2; i++)
			for (int j = y1; j <= y2; j++)
				sum += arr[i][j];
		printf("%d\n", sum);
	}
	return 0;

}