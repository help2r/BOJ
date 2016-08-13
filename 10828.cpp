#include <iostream>
#include <stack>
#include <string.h>
#include <string>
using namespace std;

int n;
stack <int>st;
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
			st.push(k);
		}

		else if (s == "pop")
		{
			if (!st.empty())
			{
				cout << st.top() << endl;
				st.pop();
			}
			else
				cout << -1 << endl;		
		}

		else if (s == "size")
		{
			cout << st.size() << endl;
		}

		else if (s == "empty")
		{
			if (!st.empty())
				cout << 0 << endl;
			else
				cout << 1 << endl;
		}

		else if (s == "top")
		{
			if (!st.empty())
				cout << st.top() << endl;
			else
				cout << -1 << endl;
		}
	}
	return 0;
}