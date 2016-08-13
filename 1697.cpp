#include <iostream>
#include <queue>
using namespace std;

int arr[100001], n, m;
bool chk[100001];
int x[100001], c[100001];
void enq(int _x, int _c);
int cnt;
int main()
{
	cin >> n >> m;

	enq(n, 0);
	int now = 0;

	while (now<cnt)
	{
		chk[x[now]] = true;
		if (x[now] > 0 && !chk[x[now] - 1])
		{
			chk[x[now] - 1] = true;
			enq(x[now] - 1, c[now] + 1);
		}
		if (x[now] <100001 && !chk[x[now] + 1])
		{
			chk[x[now] + 1] = true;
			enq(x[now] + 1, c[now] + 1);
		}
		if (x[now] * 2 < 100001 && !chk[x[now] * 2])
		{
			chk[x[now] * 2] = true;
			enq(x[now] * 2, c[now] + 1);
		}
		if (x[now] == m)
			break;
		now++;
	}
	cout << c[now];
}

void enq(int _x, int _c)
{
	x[cnt] = _x;
	c[cnt] = _c;
	cnt++;
}