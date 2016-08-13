#include <iostream>
#include <queue>
#include <string.h>
#include <string>
using namespace std;

int n;
queue <int>q;
int main()
{
	int k;
	string s;
	cin >> n;

	while (n--)
	{
		cin >> s;

		if (s == "push")
		{
			cin >> k;
			q.push(k);
		}

		else if (s == "pop")
		{
			if (!q.empty())
			{
				cout << q.front() << endl;
				q.pop();
			}
			else
				cout << -1 << endl;
		}

		else if (s == "size")
			cout << q.size() << endl;

		else if (s == "empty")
		{
			if (!q.empty())
				cout << 0 << endl;
			else
				cout << 1 << endl;
		}

		else if (s == "front")
		{
			if (!q.empty())
				cout << q.front() << endl;
			else
				cout << -1 << endl;
		}

		else if (s == "back")
		{
			if (!q.empty())
				cout << q.back() << endl;
			else
				cout << -1 << endl;
		}
	}
	return 0;
}