#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> v;
int n;
int main()
{
	int k;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
	cout << v.front()*v.back();

}