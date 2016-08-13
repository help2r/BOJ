#include <iostream>//2
#include <stack>
using namespace std;

int n,sum;
stack <int> q;
int main()
{
	int k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		if (k!=0)
			q.push(k);
		else if(k==0 && !q.empty())
			q.pop();
	}
	while (!q.empty())
	{
		sum += q.top();
		q.pop();
	}
	cout << sum;
}
