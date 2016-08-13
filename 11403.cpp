#include <iostream>
#include <cstring>
using namespace std;

int n;
int arr[103][103];
int chk[103][103];
bool visit[103];
void dfs(int a, int b);
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> arr[i][j];
		}

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= n; j++)
		{
			if (arr[i][j] == 1)
			{
				chk[i][j] = 1;
				dfs(i, j);
			}
			memset(visit, false, 103);
		}
    
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
			cout << chk[i][j]<<" ";
		cout << endl;
	}
}

void dfs(int a, int b)
{
	visit[b] = true;
	for (int i = 1; i <= n; i++)
	{
		if (arr[b][i] == 1 && !visit[i])
		{
			chk[a][i] = 1;
			dfs(a, i);
		}
	}

}