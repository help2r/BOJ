#include <iostream>
#include <algorithm>
using namespace std;

int p[4], s[2],sum;
int main()
{
	for (int i = 0; i < 4; i++)
		cin >> p[i];
	for (int i = 0; i < 2; i++)
		cin >> s[i];
	sort(p, p + 4);
	sort(s, s + 2);
	for (int i = 3; i > 0; i--)
		sum += p[i];
	sum += s[1];
	cout << sum;
}