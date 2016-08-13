#include <iostream>
using namespace std;

void enqueue(int _x, int _y, int _c);
void bfs(int _x, int _y);
int n, m;
int cnt;
bool chk[10200];
char ch[102][102];
int x[10200], y[10200], c[10200];
int main()
{
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			cin >> ch[i][j];
	bfs(1, 1);
}
void enqueue(int _x, int _y, int _c)
{
	x[cnt] = _x;
	y[cnt] = _y;
	c[cnt] = _c;
	cnt++;
}

void bfs(int a, int b)
{
	chk[b] = true;
	enqueue(a, b, 1);
	int now = 0;
	ch[x[now]][y[now]] = '0';
	while (now < cnt && (x[now]!=n || y[now]!=m))
	{
		if (x[now]>1 && ch[x[now]-1][y[now]] == '1')
		{
			ch[x[now] - 1][y[now]] = '0';
			enqueue(x[now] - 1, y[now], c[now] + 1);
		}//위

		if (x[now] < n && ch[x[now] + 1][y[now]] == '1')
		{
			ch[x[now] + 1][y[now]] = '0';
			enqueue(x[now] + 1, y[now], c[now] + 1);
		}//아래

		if (y[now] >1 && ch[x[now]][y[now]-1] == '1')
		{
			ch[x[now]][y[now] - 1] = '0';
			enqueue(x[now], y[now]-1, c[now] + 1);
		}//왼쪽

		if (y[now] <m && ch[x[now]][y[now] +1] == '1')
		{
			ch[x[now]][y[now] + 1] = '0';
			enqueue(x[now], y[now] + 1, c[now] + 1);
		}//오른
		now++;
	}
	cout << c[now];
}