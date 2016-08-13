#include <iostream> //4
using namespace std;

int n,k,t;
int main()
{
	double a, b, c;
	cin >> n;
	while (n--)
	{
		int cnt = 0;
		cin >> k >> t;
		for (int i = 0; i < k; i++)
		{
			cin >> a >> b >> c;
			b /= c;
			if (a * b >= t)
				cnt++;
		}
		cout << cnt << endl;
	}
}