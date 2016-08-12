#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v1;
vector <int> v2;
int n, sum;
int main()
{
	int k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		v1.push_back(k);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		v2.push_back(k);
	}
	sort(v1.begin(), v1.end());
	sort(v2.rbegin(), v2.rend());
	for (int i = 0; i < n; i++)
	{
		sum += (v1[i] * v2[i]);
	}
	cout << sum;

}