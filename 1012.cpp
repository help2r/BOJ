#include <iostream>
using namespace std;

void dfs(int n1, int n2);
int n;
int arr[51][51];
int a, b;
int main()
{
	int x, y, c;
	cin >> n;
	while (n--)
	{
		int cnt = 0;
		cin >> a >> b >> c;
		for (int i = 0; i <c; i++)
		{
			cin >> x >> y;
			arr[x][y] = 1;
		}

		for (int i = 0; i < a; i++)
			for (int j = 0; j < b; j++)
			{
				if (arr[i][j] == 1)
				{
					cnt++;
					dfs(i, j);
				}
			}
		cout << cnt << endl;
	}
}

void dfs(int n1, int n2)
{
	arr[n1][n2] = 0;

	if (n1< a - 1 && arr[n1 + 1][n2] == 1)
		dfs(n1 + 1, n2); //아래
	if (n1 > 0 && arr[n1 - 1][n2] == 1)
		dfs(n1 - 1, n2); //위
	if (n2 < b - 1 && arr[n1][n2 + 1] == 1)
		dfs(n1, n2 + 1);//오른쪽
	if (n2 > 0 && arr[n1][n2 - 1] == 1)
		dfs(n1, n2 - 1);//왼쪽
}