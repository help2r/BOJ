#include <iostream>
#include <queue>
using namespace std;

void bfs(int v);
int n, a, b;
int cnt;
int arr[102][102];
bool chk[102];
int x[102], c[102];
void enq(int _x, int _c);
int main()
{
	int m, x, y;
	cin >> n >> a >> b;
	cin >> m;
	for (int i= 0; i < m; i++)
	{
		cin >> x >> y;
		arr[x][y] = arr[y][x] = 1;
	}
	if (a == b)
	{
		cout << 0 << endl;
		return 0;
	}
	bfs(a);
}

void enq(int _x, int _c)
{
	x[cnt] = _x;
	c[cnt] = _c;
	cnt++;
}
void bfs(int v)
{
	chk[v] = true;
	int now = 0;
	enq(v, 0);
	while (now < cnt)
	{
		for (int i = 1; i <= n;i++)
			if (arr[x[now]][i] == 1 && !chk[i])
			{
				chk[i] = true;
				enq(i, c[now] + 1);
				if (i == b)
				{
					cout << c[now] + 1 << endl;
					return ;
				}
			}
		now++;
	}
	cout << -1 << endl;
}